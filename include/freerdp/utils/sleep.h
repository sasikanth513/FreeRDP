/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * Sleep Utils
 *
 * Copyright 2011 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_UTILS_SLEEP_H
#define FREERDP_UTILS_SLEEP_H

#include <freerdp/api.h>
#include <freerdp/types.h>

FREERDP_API void freerdp_sleep(UINT32 seconds);
FREERDP_API void freerdp_usleep(UINT32 useconds);

#endif /* FREERDP_UTILS_SLEEP_H */
