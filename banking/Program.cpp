#include "Login.h"
#include "Homepage.h"
#include "Welcome.h"
#include "register_user.h"
#include "View_account_details.h"
#include "Withdraw.h"
#include "Deposit.h"

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	User^ user = nullptr;
	while (true) {
		while (true) {
			banking::Welcome welcome;
			welcome.ShowDialog();

			if (welcome.switchToRegister)
			{
				banking::register_user re_user;
				re_user.ShowDialog();
				user = re_user.user;

			}
			else if (welcome.switchToLogin)
			{
				banking::Login login;
				login.ShowDialog();
				if (login.switch_signup)
				{
					banking::register_user re_user;
					re_user.ShowDialog();
				}
				else
				{
					user = login.user;
					break;
				}

			}
		}


		if (user != nullptr) {

			while (true) {
				banking::Homepage homepage(user);
				Application::Run(% homepage);

				if (homepage.switch_logout) {
					break;
				}
				else if (homepage.switch_viewDetails) {
					while (true) {
						banking::View_account_details details(user);
						Application::Run(% details);
						if (details.switch_homepage) {

							break;
						}
					}
				}
				else if (homepage.switch_withdraw)
				{
					banking::Withdraw withdraw;
					withdraw.ShowDialog();
					user = withdraw.user;
					//break;
				}
				else if (homepage.switch_deposit)
				{
					banking::Deposit deposit;
					deposit.ShowDialog();
					user = deposit.user;
				}
				
			}
			
				
		}
		else
		{
			MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
		}
		
	}
	

	
}