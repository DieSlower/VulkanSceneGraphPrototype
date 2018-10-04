#pragma once

/* <editor-fold desc="MIT License">

Copyright(c) 2018 Robert Osfield

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

</editor-fold> */

#include <vsg/core/Object.h>
#include <vsg/core/ref_ptr.h>

#include <map>
#include <algorithm>

namespace vsg
{

    /** Auxiliary provides extra Object data that is rarely used, and hooks for observers.*/
    class VSG_EXPORT alignas(VSG_AUXILIARY_ALIGNMENT) Auxiliary
    {
    public:
        Auxiliary();

        Object* getConnectedObject() { return _connectedObject; }
        const Object* getConnectedObject() const { return _connectedObject; }

        void ref() const;
        void unref() const;
        void unref_nodelete() const;
        inline unsigned int referenceCount() const { return _referenceCount.load(); }

        void setObject(const Object::Key& key, Object* object);
        Object* getObject(const Object::Key& key);
        const Object* getObject(const Object::Key& key) const;

        typedef std::map< Object::Key, vsg::ref_ptr<Object> > ObjectMap;
        ObjectMap& getObjectMap() { return _objectMap; }
        const ObjectMap& getObjectMap() const { return _objectMap; }

    protected:

        virtual ~Auxiliary();

        void setConnectedObject(Object* object);

        /// reset the ConnectedObject pointer to 0 unless the ConnectedObject referenceCount goes back above 0,
        /// return true if ConnectedObject should still be deleted, or false if the object should be kept.
        bool signalConnectedObjectToBeDeleted() const;

        friend class Object;

        mutable std::atomic_uint _referenceCount;
        mutable std::atomic<Object*> _connectedObject;

        ObjectMap _objectMap;

    };

}
