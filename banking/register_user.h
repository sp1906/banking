#pragma once
#include "User.h"
#include <iostream>
#include <string>


namespace banking {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace std;

	/// <summary>
	/// Summary for register_user
	/// </summary>
	public ref class register_user : public System::Windows::Forms::Form
	{
	public:
		register_user(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~register_user()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(916, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Create New Account";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(54, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Account Number";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(55, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(259, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Username";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(54, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 39);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Password";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(477, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(351, 34);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(477, 164);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(351, 34);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(477, 228);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(351, 34);
			this->textBox3->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(311, 426);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(254, 55);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Sign Up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &register_user::button1_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(55, 288);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(259, 39);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Confirm Password";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(477, 288);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(351, 34);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(477, 352);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(351, 34);
			this->textBox5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(54, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(261, 41);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Initial Balance";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// register_user
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(918, 504);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"register_user";
			this->Text = L"register_user";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
public: User^ user = nullptr;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ account_no = this->textBox1->Text;
	String^ name = this->textBox2->Text;
	String^ password = this->textBox3->Text;
	String^ con_pass = this->textBox4->Text;
	String^ balance =this->textBox5->Text;

	//int number = Int32::Parse(balance);

	if (account_no->Length == 0 || name->Length == 0 || password->Length == 0 || con_pass->Length == 0)
	{
		MessageBox::Show("Please enter all the fields", "One or more fields empty", MessageBoxButtons::OK);
		return;
	}
	if (String::Compare(password, con_pass )!=0)
	{
		MessageBox::Show("Password and Confirm Password do not match", "Password Error", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=bank;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO bank_details ([Account number],[Name],[Password],[Balance]) VALUES(@account_no, @username, @password, @balance);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@account_no", account_no);
		command.Parameters->AddWithValue("@username", name);
		command.Parameters->AddWithValue("@password", password);
		command.Parameters->AddWithValue("@balance", balance);
		command.ExecuteNonQuery();
		user = gcnew User;
		user->account_no = account_no;
		user->name = name;
		user->password = password;
		user->balance = balance;
		this->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to Create new Account", "Register Failure", MessageBoxButtons::OK);
	}

}
};
}
