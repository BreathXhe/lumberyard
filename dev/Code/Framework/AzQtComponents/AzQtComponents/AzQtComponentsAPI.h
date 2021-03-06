/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/
#pragma once

/**
 * \mainpage
 * 
 * Introduced with Amazon Lumberyard version 1.25 and the release of UI 2.0, Lumberyard’s
 * custom Qt widget library provides developers with access to the same UI components used
 * throughout Lumberyard. Using this library, UI developers can build their own tools and
 * extensions for Lumberyard, while maintaining a coherent and standardized UI experience.
 * This custom library provides new and extended widgets, and includes a set of styles and
 * user interaction patterns that are applied on top of the Qt framework - the C++ library
 * that Lumberyard relies on for its UI. The library can be extended to support your own customizations and modifications. 
 * 
 * With this UI 2.0 API reference guide, we're working towards offering a full and comprehensive
 * API refernce for all tools developers that are extending Lumberyard. The API reference
 * is intended for C++ programmers building tools. For UX designers looking to understand
 * the best patterns and practices when making a tool to comfortably integrate with
 * the Lumberyard editor, see the [UI 2.0 design guide](https://docs.aws.amazon.com/lumberyard/latest/ui/).
 */
#include <AzCore/PlatformDef.h>

#if defined(AZ_QT_COMPONENTS_STATIC)
    // if we're statically linking, then we don't need to export or import symbols
    #define AZ_QT_COMPONENTS_API
#elif defined(AZ_QT_COMPONENTS_EXPORT_SYMBOLS)
    #define AZ_QT_COMPONENTS_API AZ_DLL_EXPORT
#else
    #define AZ_QT_COMPONENTS_API AZ_DLL_IMPORT
#endif

namespace AzQtComponents
{
    constexpr const char* HasSearchAction = "HasSearchAction";
    constexpr const char* HasError = "HasError";
    constexpr const char* ClearAction = "_q_qlineeditclearaction";
    constexpr const char* ClearToolButton = "ClearToolButton";
    constexpr const char* ErrorToolButton = "ErrorToolButton";
    constexpr const char* SearchToolButton = "SearchToolButton";
    constexpr const char* StoredClearButtonState = "_storedClearButtonState";
    constexpr const char* StoredHoverAttributeState = "_storedWaHoverState";
    constexpr const char* ErrorMessage = "_errorMessage";
    constexpr const char* ErrorIconEnabled = "_errorIconEnabled";
    constexpr const char* Validator = "Validator";
    constexpr const char* HasPopupOpen = "HasPopupOpen";
    constexpr const char* HasExternalError = "HasExternalError";
    constexpr const char* NoMargins = "NoMargins";
    constexpr const char* ValidDropTarget = "ValidDropTarget";
    constexpr const char* InvalidDropTarget = "InvalidDropTarget";
}

