#pragma once

namespace MyLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for borrow_info
	/// </summary>
	public ref class borrow_info : public System::Windows::Forms::Form
	{
	public:
		borrow_info(void)
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
		~borrow_info()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  borrow_inf;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button18;
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
			this->borrow_inf = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// borrow_inf
			// 
			this->borrow_inf->FormattingEnabled = true;
			this->borrow_inf->Location = System::Drawing::Point(11, 99);
			this->borrow_inf->Name = L"borrow_inf";
			this->borrow_inf->Size = System::Drawing::Size(699, 368);
			this->borrow_inf->TabIndex = 0;
			this->borrow_inf->SelectedIndexChanged += gcnew System::EventHandler(this, &borrow_info::borrow_inf_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(149, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(223, 20);
			this->textBox1->TabIndex = 8;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Location = System::Drawing::Point(149, 12);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(348, 36);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(191, 13);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(45, 17);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Title";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(26, 13);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(36, 17);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"ID";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(380, 48);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(117, 35);
			this->button18->TabIndex = 6;
			this->button18->Text = L"Search";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &borrow_info::button18_Click);
			// 
			// borrow_info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 479);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->borrow_inf);
			this->Name = L"borrow_info";
			this->Text = L"borrow_info";
			this->Load += gcnew System::EventHandler(this, &borrow_info::borrow_info_Load);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void borrow_info_Load(System::Object^  sender, System::EventArgs^  e) {
				  StreamReader^ re=gcnew StreamReader("Borrowed_Books.txt");
			 borrow_inf->Items->Clear();
			 while(!re->EndOfStream){
				 borrow_inf->Items->Add(re->ReadLine());
			 }
			 re->Close();
			 }
	private: System::Void borrow_inf_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 borrow_inf->Items->Clear();
			 StreamReader^ sr=gcnew StreamReader("Borrowed_Books.txt");
			 if(radioButton1->Checked){
				while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(textBox1->Text+"  "==arr[6]){
						borrow_inf->Items->Add(row);	
					}
				}  
			 }
			 else if(radioButton2->Checked){
				 while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(textBox1->Text+"  "==arr[2]){
						borrow_inf->Items->Add(row);	
					}
				}
			 }
			 else{
				 MessageBox::Show("Please Select ID Or Title" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
			 sr->Close();
		 }
};
}
