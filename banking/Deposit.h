#pragma once
#include "User.h"

namespace banking {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Deposit
	/// </summary>
	public ref class Deposit : public System::Windows::Forms::Form
	{
	public:
		Deposit(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Deposit()
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(841, 96);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Deposit";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(395, 41);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter Account number";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1, 452);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(840, 54);
			this->label3->TabIndex = 2;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(51, 303);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(395, 42);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Enter Amount to be deposited";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(466, 303);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(364, 34);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(466, 174);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(364, 34);
			this->textBox2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(350, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 47);
			this->button1->TabIndex = 6;
			this->button1->Text = L"ok";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Deposit::button1_Click);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(51, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(395, 41);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Name";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(466, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(364, 34);
			this->textBox3->TabIndex = 8;
			// 
			// Deposit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(842, 506);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Deposit";
			this->Text = L"Deposit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ amount_with = this->textBox1->Text;
		String^ account_no = this->textBox2->Text;
		String^ name = this->textBox3->Text;

		if (amount_with->Length==0 || account_no->Length == 0 || name->Length==0) {
			MessageBox::Show("Please enter the account number, amount and name...", "Fill the field", MessageBoxButtons::OK);
			return;
		}
		try
		{
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=bank;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "Select * from bank_details where [Account number]=@account_no and [Name]=@name;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@account_no", account_no);
			command.Parameters->AddWithValue("@name", name);
			SqlDataReader^ reader = command.ExecuteReader();


			if (reader->Read())
			{

				user = gcnew User;
				user->account_no = reader->GetString(0);
				user->name = reader->GetString(1);
				user->password = reader->GetString(2);
				user->balance = reader->GetString(3);
				//user->account_no =reader->GetString(0);
				//user->balance= reader->GetString(0);
				reader->Close();
				int int_amount_with = Int32::Parse(amount_with);
				String^ ini_balance = user->balance;
				int int_ini_balance = Int32::Parse(ini_balance);
				int final_amount = int_ini_balance + int_amount_with;
				String^ final_balance = Convert::ToString(final_amount);
				int account = Int32::Parse(account_no);

				String^ UpdateQuery = "Update bank_details set [Balance]=@balance where [Account number]=@account;";
				SqlCommand updatecommand(UpdateQuery, % sqlConn);
				updatecommand.Parameters->AddWithValue("@balance", final_balance);
				updatecommand.Parameters->AddWithValue("@account", account_no);
				user->balance = final_balance;

				updatecommand.ExecuteNonQuery();

				this->label3->Text = "Deposit Successfull.Current bank balance = " + final_balance;




			}
			else
			{
				MessageBox::Show("Incorrect Account Number or name", "Error", MessageBoxButtons::OK);
				reader->Close();
				return;
			}


		}
		catch (Exception^ eg) {
			MessageBox::Show("Failed to connect to database.", "Error", MessageBoxButtons::OK);
			return;

		}
	
	}
};
}
