#pragma once

/* <editor-fold desc="MIT License">

Copyright(c) 2018 Robert Osfield

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

</editor-fold> */

// Core header files
#include <vsg/core/Allocator.h>
#include <vsg/core/Array.h>
#include <vsg/core/Array2D.h>
#include <vsg/core/Array3D.h>
#include <vsg/core/Auxiliary.h>
#include <vsg/core/ConstVisitor.h>
#include <vsg/core/Data.h>
#include <vsg/core/Export.h>
#include <vsg/core/Inherit.h>
#include <vsg/core/Object.h>
#include <vsg/core/Result.h>
#include <vsg/core/Value.h>
#include <vsg/core/Version.h>
#include <vsg/core/Visitor.h>
#include <vsg/core/observer_ptr.h>
#include <vsg/core/ref_ptr.h>
#include <vsg/core/type_name.h>

// Maths header files
#include <vsg/maths/mat4.h>
#include <vsg/maths/transform.h>
#include <vsg/maths/vec2.h>
#include <vsg/maths/vec3.h>
#include <vsg/maths/vec4.h>

// Node header files
#include <vsg/nodes/Group.h>
#include <vsg/nodes/LOD.h>
#include <vsg/nodes/Node.h>
#include <vsg/nodes/QuadGroup.h>
#include <vsg/nodes/StateGroup.h>

// Traversal header files
#include <vsg/traversals/CullTraversal.h>
#include <vsg/traversals/DispatchTraversal.h>

// User Interface abstraction header files
#include <vsg/ui/KeyEvent.h>
#include <vsg/ui/PointerEvent.h>
#include <vsg/ui/TouchEvent.h>
#include <vsg/ui/UIEvent.h>
#include <vsg/ui/WindowEvent.h>

// Viewer header files
#include <vsg/viewer/GraphicsStage.h>
#include <vsg/viewer/Viewer.h>
#include <vsg/viewer/Window.h>

// Vulkan related header files
#include <vsg/vk/AllocationCallbacks.h>
#include <vsg/vk/BindIndexBuffer.h>
#include <vsg/vk/BindVertexBuffers.h>
#include <vsg/vk/Buffer.h>
#include <vsg/vk/BufferData.h>
#include <vsg/vk/BufferView.h>
#include <vsg/vk/Command.h>
#include <vsg/vk/CommandBuffer.h>
#include <vsg/vk/CommandPool.h>
#include <vsg/vk/ComputePipeline.h>
#include <vsg/vk/Descriptor.h>
#include <vsg/vk/DescriptorPool.h>
#include <vsg/vk/DescriptorSet.h>
#include <vsg/vk/DescriptorSetLayout.h>
#include <vsg/vk/Device.h>
#include <vsg/vk/DeviceMemory.h>
#include <vsg/vk/Draw.h>
#include <vsg/vk/Extensions.h>
#include <vsg/vk/Fence.h>
#include <vsg/vk/Framebuffer.h>
#include <vsg/vk/GraphicsPipeline.h>
#include <vsg/vk/Image.h>
#include <vsg/vk/ImageView.h>
#include <vsg/vk/Instance.h>
#include <vsg/vk/MemoryManager.h>
#include <vsg/vk/PhysicalDevice.h>
#include <vsg/vk/Pipeline.h>
#include <vsg/vk/PipelineLayout.h>
#include <vsg/vk/PushConstants.h>
#include <vsg/vk/RenderPass.h>
#include <vsg/vk/Sampler.h>
#include <vsg/vk/Semaphore.h>
#include <vsg/vk/ShaderModule.h>
#include <vsg/vk/State.h>
#include <vsg/vk/Surface.h>
#include <vsg/vk/Swapchain.h>

// Input/Output header files
#include <vsg/io/AsciiInput.h>
#include <vsg/io/AsciiOutput.h>
#include <vsg/io/BinaryInput.h>
#include <vsg/io/BinaryOutput.h>
#include <vsg/io/FileSystem.h>
#include <vsg/io/Input.h>
#include <vsg/io/ObjectFactory.h>
#include <vsg/io/Output.h>
#include <vsg/io/ReaderWriter.h>
#include <vsg/io/stream.h>

// Utiltiy header files
#include <vsg/utils/CommandLine.h>

// Introspection header files
#include <vsg/introspection/c_interface.h>
