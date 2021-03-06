/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "slave/containerizer/provisioner.hpp"

using namespace process;

namespace mesos {
namespace internal {
namespace slave {

Try<hashmap<Image::Type, Owned<Provisioner>>> Provisioner::create(
    const Flags& flags,
    Fetcher* fetcher)
{
  // TODO(tnachen): Load provisioners when one of them is available.
  return hashmap<Image::Type, Owned<Provisioner>>();
}

} // namespace slave {
} // namespace internal {
} // namespace mesos {
