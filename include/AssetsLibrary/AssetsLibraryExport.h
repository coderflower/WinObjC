//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#ifndef ASSETSLIBRARY_IMPEXP
#define ASSETSLIBRARY_IMPEXP __declspec(dllimport)
#endif

#ifndef ASSETSLIBRARY_EXPORT
#ifdef __cplusplus
#define ASSETSLIBRARY_EXPORT ASSETSLIBRARY_IMPEXP extern "C"
#define ASSETSLIBRARY_EXPORT_CLASS ASSETSLIBRARY_IMPEXP
#else
#define ASSETSLIBRARY_EXPORT ASSETSLIBRARY_IMPEXP extern
#define ASSETSLIBRARY_EXPORT_CLASS ASSETSLIBRARY_IMPEXP
#endif
#endif

#ifndef ASSETSLIBRARY_EXTERNC_BEGIN
#if defined(__cplusplus)
#define ASSETSLIBRARY_EXTERNC_BEGIN extern "C" {
#define ASSETSLIBRARY_EXTERNC_END }
#else
#define ASSETSLIBRARY_EXTERNC_BEGIN
#define ASSETSLIBRARY_EXTERNC_END
#endif
#endif
