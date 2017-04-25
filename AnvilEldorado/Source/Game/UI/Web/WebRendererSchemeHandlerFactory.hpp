#pragma once
#include <include/cef_scheme.h>
#include <filesystem>

namespace Anvil
{
	namespace Client
	{
		namespace Rendering
		{
			class WebRendererSchemeHandlerFactory : public CefSchemeHandlerFactory
			{
				std::string m_Scheme;
				std::experimental::filesystem::path m_Directory;

			public:
				WebRendererSchemeHandlerFactory(const std::string &p_Scheme, const std::experimental::filesystem::path &p_Directory);

			protected:
				CefRefPtr<CefResourceHandler> Create(CefRefPtr<CefBrowser> p_Browser, CefRefPtr<CefFrame> p_Frame, const CefString& p_SchemeName, CefRefPtr<CefRequest> p_Request) override;
				IMPLEMENT_REFCOUNTING(WebRendererSchemeHandlerFactory);
			};
		}
	}
}