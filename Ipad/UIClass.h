#include "stdafx.h"
#include "InterFace.h"
#include <string>
using namespace std; 

class UIClass : public I_LTFRAME_IWebView
{
public:
	UIClass();
	~UIClass(void);
	virtual LRESULT HandleUserMessage(HWND hwnd,UINT uMsg,WPARAM wParam,LPARAM lParam);
	virtual LPCWSTR GetWindowClassName();
	void DragWindow();
	void QuitApp();
	void MinWindow();
private:
	WebView* ltskinview;
	wchar_t* applicationpath;
};