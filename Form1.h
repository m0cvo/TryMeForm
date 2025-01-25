#pragma once
#include <cstdlib>
#include <ctime>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ getBtn;

	private: System::Windows::Forms::Button^ exitBtn;
	protected:

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
			this->getBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"---";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(153, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"---";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(194, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"---";
			// 
			// getBtn
			// 
			this->getBtn->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->getBtn->Location = System::Drawing::Point(113, 104);
			this->getBtn->Name = L"getBtn";
			this->getBtn->Size = System::Drawing::Size(75, 23);
			this->getBtn->TabIndex = 3;
			this->getBtn->Text = L"Get values";
			this->getBtn->UseVisualStyleBackColor = false;
			this->getBtn->Click += gcnew System::EventHandler(this, &Form1::getBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitBtn->Location = System::Drawing::Point(197, 104);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(75, 23);
			this->exitBtn->TabIndex = 4;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = false;
			this->exitBtn->Click += gcnew System::EventHandler(this, &Form1::exitBtn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->getBtn);
			this->Name = L"Form1";
			this->Text = L"TryMe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void getBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	int i, j, k, nums[50];
	srand((int)time(0));
	for (i = 1; i < 50; i++) nums[i] = i;
	for (i = 1; i < 50; i++)
	{
		j = (rand() % 49) + 1;
		k = nums[i]; nums[i] = nums[j]; nums[j] = k;
	}
	
	this->label1->Text = Convert::ToString(nums[1]);
	this->label2->Text = Convert::ToString(nums[2]);
	this->label3->Text = Convert::ToString(nums[3]);
}
};
}
