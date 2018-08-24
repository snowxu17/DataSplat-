#pragma once

#include "il2cpp-object-internals.h"
#include "utils/StringView.h"

namespace il2cpp
{
namespace os
{
    class LIBIL2CPP_CODEGEN_API WindowsRuntime
    {
    public:
        static il2cpp_hresult_t GetActivationFactory(Il2CppHString className, Il2CppIActivationFactory** activationFactory);

        static il2cpp_hresult_t CreateHStringReference(const utils::StringView<Il2CppNativeChar>& str, Il2CppHStringHeader* header, Il2CppHString* hstring);
        static il2cpp_hresult_t CreateHString(const utils::StringView<Il2CppChar>& str, Il2CppHString* hstring);
        static il2cpp_hresult_t DeleteHString(Il2CppHString hstring);

        static const Il2CppChar* GetHStringBuffer(Il2CppHString hstring, uint32_t* length);
        static Il2CppString* HStringToManagedString(Il2CppHString hstring);

        static Il2CppIRestrictedErrorInfo* GetRestrictedErrorInfo();
        static void OriginateLanguageException(Il2CppException* ex, Il2CppString* exceptionString);

        static void EnableErrorReporting();
    };
}
}
