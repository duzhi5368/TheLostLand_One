/**
*	created:		2013-4-12   13:18
*	filename: 		FKFileOpen
*	author:			FreeKnight
*	Copyright (C): 	
*	purpose:		
*/
//------------------------------------------------------------------------
#pragma once
//------------------------------------------------------------------------
#include "../../../FKUIOutSideHead.h"
//------------------------------------------------------------------------
namespace FK2DEngine2
{
	namespace Dialogs
	{
		// 使用方式:
		// FK2DEngine2::Dialogs::FileOpen( true, "Open Map", "C:\my\folder\", "My Map Format|*.bmf", this, &MyClass::OpenFilename );

		// 实际函数，若 bUseSystem 设置为true,则表示使用系统模态界面
		void FK_EXPORT FileOpenEx( bool bUseSystem, const String & Name, const String & StartPath, const String & Extension,
			FK2DEngine2::Event::Handler* pHandler = NULL, FK2DEngine2::Event::Handler::FunctionWithInformation fnCallback = NULL );

		template< typename A>
		void FileOpen( bool bUseSystem, const String & Name, const String & StartPath, const String & Extension, FK2DEngine2::Event::Handler* pHandler = NULL, A fnCallback = NULL )
		{
			FileOpenEx( bUseSystem, Name, StartPath, Extension, pHandler, static_cast<FK2DEngine2::Event::Handler::FunctionWithInformation>( fnCallback ) );
		}

	}
}
//------------------------------------------------------------------------