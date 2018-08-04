/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TNT_FILAMAT_CHUNK_IB_H
#define TNT_FILAMAT_CHUNK_IB_H

#include "filament/SamplerInterfaceBlock.h"
#include "filament/UniformInterfaceBlock.h"
#include "filament/SamplerBindingMap.h"
#include "filaflat/Unflattener.h"

namespace filaflat {

struct ChunkUniformInterfaceBlock{
    bool unflatten(Unflattener& unflattener, filament::UniformInterfaceBlock*);
};

struct ChunkSamplerInterfaceBlock {
    bool unflatten(Unflattener& unflattener,filament::SamplerInterfaceBlock*);
};

struct ChunkSamplerBindingsBlock {
    bool unflatten(Unflattener& unflattener,filament::SamplerBindingMap*);
};

} // namespace filamat

#endif // TNT_FILAMAT_CHUNK_IB_H