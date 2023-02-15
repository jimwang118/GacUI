﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "GuiFakeDialogServiceUIReflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(gaclib_controls::ColorComponentControl)
			IMPL_CPP_TYPE_INFO(gaclib_controls::ColorComponentControlConstructor)
			IMPL_CPP_TYPE_INFO(gaclib_controls::ColorDialogControl)
			IMPL_CPP_TYPE_INFO(gaclib_controls::ColorDialogControlConstructor)
			IMPL_CPP_TYPE_INFO(gaclib_controls::ColorDialogWindow)
			IMPL_CPP_TYPE_INFO(gaclib_controls::ColorDialogWindowConstructor)
			IMPL_CPP_TYPE_INFO(gaclib_controls::DialogStrings)
			IMPL_CPP_TYPE_INFO(gaclib_controls::IDialogStringsStrings)
			IMPL_CPP_TYPE_INFO(gaclib_controls::MessageBoxButtonTemplate)
			IMPL_CPP_TYPE_INFO(gaclib_controls::MessageBoxButtonTemplateConstructor)
			IMPL_CPP_TYPE_INFO(gaclib_controls::MessageBoxWindow)
			IMPL_CPP_TYPE_INFO(gaclib_controls::MessageBoxWindowConstructor)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
#define _ ,
			BEGIN_CLASS_MEMBER(::gaclib_controls::ColorComponentControl)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiCustomControl)
				CLASS_MEMBER_BASE(::gaclib_controls::ColorComponentControlConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gaclib_controls::ColorComponentControl*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetValue, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetValue, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(ValueChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_Value)
				CLASS_MEMBER_PROPERTY_EVENT(Value, GetValue, SetValue, ValueChanged)
			END_CLASS_MEMBER(::gaclib_controls::ColorComponentControl)

			BEGIN_CLASS_MEMBER(::gaclib_controls::ColorComponentControlConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gaclib_controls::ColorComponentControlConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gaclib_controls_ColorComponentControl_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textBox)
				CLASS_MEMBER_FIELD(tracker)
			END_CLASS_MEMBER(::gaclib_controls::ColorComponentControlConstructor)

			BEGIN_CLASS_MEMBER(::gaclib_controls::ColorDialogControl)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiCustomControl)
				CLASS_MEMBER_BASE(::gaclib_controls::ColorDialogControlConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gaclib_controls::ColorDialogControl*(::vl::Ptr<::vl::presentation::IColorDialogViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetStrings, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(ReadColor, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetStrings, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(StringsChanged)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_FIELD(__vwsn_prop_Strings)
				CLASS_MEMBER_PROPERTY_EVENT(Strings, GetStrings, SetStrings, StringsChanged)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::gaclib_controls::ColorDialogControl)

			BEGIN_CLASS_MEMBER(::gaclib_controls::ColorDialogControlConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gaclib_controls::ColorDialogControlConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gaclib_controls_ColorDialogControl_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(colorBlue)
				CLASS_MEMBER_FIELD(colorGreen)
				CLASS_MEMBER_FIELD(colorRed)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::gaclib_controls::ColorDialogControlConstructor)

			BEGIN_CLASS_MEMBER(::gaclib_controls::ColorDialogWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_BASE(::gaclib_controls::ColorDialogWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gaclib_controls::ColorDialogWindow*(::vl::Ptr<::vl::presentation::IColorDialogViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetStrings, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetStrings, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(StringsChanged)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_FIELD(__vwsn_prop_Strings)
				CLASS_MEMBER_PROPERTY_EVENT(Strings, GetStrings, SetStrings, StringsChanged)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::gaclib_controls::ColorDialogWindow)

			BEGIN_CLASS_MEMBER(::gaclib_controls::ColorDialogWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gaclib_controls::ColorDialogWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gaclib_controls_ColorDialogWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(colorControl)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::gaclib_controls::ColorDialogWindowConstructor)

			BEGIN_CLASS_MEMBER(::gaclib_controls::DialogStrings)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gaclib_controls::DialogStrings>(), NO_PARAMETER)
				CLASS_MEMBER_STATIC_METHOD(__vwsn_ls_First, { L"__vwsn_ls_formats" })
				CLASS_MEMBER_STATIC_METHOD(Get, { L"__vwsn_ls_locale" })
			END_CLASS_MEMBER(::gaclib_controls::DialogStrings)

			BEGIN_INTERFACE_MEMBER(::gaclib_controls::IDialogStringsStrings)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(Abort, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Blue, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Cancel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Color, NO_PARAMETER)
				CLASS_MEMBER_METHOD(ColorDialogTitle, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Continue, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Green, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Ignore, NO_PARAMETER)
				CLASS_MEMBER_METHOD(No, NO_PARAMETER)
				CLASS_MEMBER_METHOD(OK, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Red, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Retry, NO_PARAMETER)
				CLASS_MEMBER_METHOD(TryAgain, NO_PARAMETER)
				CLASS_MEMBER_METHOD(Yes, NO_PARAMETER)
			END_INTERFACE_MEMBER(::gaclib_controls::IDialogStringsStrings)

			BEGIN_CLASS_MEMBER(::gaclib_controls::MessageBoxButtonTemplate)
				CLASS_MEMBER_BASE(::vl::presentation::templates::GuiControlTemplate)
				CLASS_MEMBER_BASE(::gaclib_controls::MessageBoxButtonTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gaclib_controls::MessageBoxButtonTemplate*(::vl::Ptr<::vl::presentation::IMessageBoxDialogAction>), { L"__vwsn_ctor_parameter_Action" })
				CLASS_MEMBER_METHOD(GetAction, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetButtonText, { L"button" _ L"strings" })
				CLASS_MEMBER_METHOD(GetStrings, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetStrings, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(StringsChanged)
				CLASS_MEMBER_FIELD(__vwsn_parameter_Action)
				CLASS_MEMBER_FIELD(__vwsn_prop_Strings)
				CLASS_MEMBER_PROPERTY_READONLY(Action, GetAction)
				CLASS_MEMBER_PROPERTY_EVENT(Strings, GetStrings, SetStrings, StringsChanged)
			END_CLASS_MEMBER(::gaclib_controls::MessageBoxButtonTemplate)

			BEGIN_CLASS_MEMBER(::gaclib_controls::MessageBoxButtonTemplateConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gaclib_controls::MessageBoxButtonTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(Action)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::gaclib_controls::MessageBoxButtonTemplateConstructor)

			BEGIN_CLASS_MEMBER(::gaclib_controls::MessageBoxWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_BASE(::gaclib_controls::MessageBoxWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::gaclib_controls::MessageBoxWindow*(::vl::Ptr<::vl::presentation::IMessageBoxDialogViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::gaclib_controls::MessageBoxWindow)

			BEGIN_CLASS_MEMBER(::gaclib_controls::MessageBoxWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::gaclib_controls::MessageBoxWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_gaclib_controls_MessageBoxWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(ViewModel)
			END_CLASS_MEMBER(::gaclib_controls::MessageBoxWindowConstructor)

#undef _
			class GuiFakeDialogServiceUITypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::gaclib_controls::ColorComponentControl)
					ADD_TYPE_INFO(::gaclib_controls::ColorComponentControlConstructor)
					ADD_TYPE_INFO(::gaclib_controls::ColorDialogControl)
					ADD_TYPE_INFO(::gaclib_controls::ColorDialogControlConstructor)
					ADD_TYPE_INFO(::gaclib_controls::ColorDialogWindow)
					ADD_TYPE_INFO(::gaclib_controls::ColorDialogWindowConstructor)
					ADD_TYPE_INFO(::gaclib_controls::DialogStrings)
					ADD_TYPE_INFO(::gaclib_controls::IDialogStringsStrings)
					ADD_TYPE_INFO(::gaclib_controls::MessageBoxButtonTemplate)
					ADD_TYPE_INFO(::gaclib_controls::MessageBoxButtonTemplateConstructor)
					ADD_TYPE_INFO(::gaclib_controls::MessageBoxWindow)
					ADD_TYPE_INFO(::gaclib_controls::MessageBoxWindowConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif
#endif

			bool LoadGuiFakeDialogServiceUITypes()
			{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(Ptr(new GuiFakeDialogServiceUITypeLoader));
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
