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
	/// Summary for stu_form
	/// </summary>
	public ref class stu_form : public System::Windows::Forms::Form
	{
	public:
		stu_form(void)
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
		~stu_form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::ListBox^  listBox4;





	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  name_student_search;
	private: System::Windows::Forms::RadioButton^  id_student_search;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::TextBox^  student_search;
















































































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(stu_form::typeid));
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->name_student_search = (gcnew System::Windows::Forms::RadioButton());
			this->id_student_search = (gcnew System::Windows::Forms::RadioButton());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->student_search = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 16;
			this->listBox4->Location = System::Drawing::Point(191, 284);
			this->listBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(887, 228);
			this->listBox4->TabIndex = 19;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(551, 22);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(102, 29);
			this->label19->TabIndex = 21;
			this->label19->Text = L"Student";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->name_student_search);
			this->groupBox1->Controls->Add(this->id_student_search);
			this->groupBox1->Location = System::Drawing::Point(335, 98);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(560, 44);
			this->groupBox1->TabIndex = 25;
			this->groupBox1->TabStop = false;
			// 
			// name_student_search
			// 
			this->name_student_search->AutoSize = true;
			this->name_student_search->Location = System::Drawing::Point(352, 14);
			this->name_student_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->name_student_search->Name = L"name_student_search";
			this->name_student_search->Size = System::Drawing::Size(66, 21);
			this->name_student_search->TabIndex = 1;
			this->name_student_search->TabStop = true;
			this->name_student_search->Text = L"Name";
			this->name_student_search->UseVisualStyleBackColor = true;
			// 
			// id_student_search
			// 
			this->id_student_search->AutoSize = true;
			this->id_student_search->Location = System::Drawing::Point(111, 14);
			this->id_student_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->id_student_search->Name = L"id_student_search";
			this->id_student_search->Size = System::Drawing::Size(42, 21);
			this->id_student_search->TabIndex = 0;
			this->id_student_search->TabStop = true;
			this->id_student_search->Text = L"ID";
			this->id_student_search->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->Location = System::Drawing::Point(747, 180);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(37, 34);
			this->button13->TabIndex = 27;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &stu_form::button13_Click);
			// 
			// student_search
			// 
			this->student_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->student_search->Location = System::Drawing::Point(419, 180);
			this->student_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->student_search->Name = L"student_search";
			this->student_search->Size = System::Drawing::Size(321, 34);
			this->student_search->TabIndex = 26;
			// 
			// stu_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1301, 574);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->student_search);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->listBox4);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"stu_form";
			this->Text = L"stu_form";
			this->Load += gcnew System::EventHandler(this, &stu_form::stu_form_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

			 
private: System::Void stu_form_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox4->Items->Clear();
			 StreamReader^ sr=gcnew StreamReader("All_Student.txt");
			 if(id_student_search->Checked){
				while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(student_search->Text+"  "==arr[5]){
						listBox4->Items->Add(row);	
					}
				}  
			 }
			 else if(name_student_search->Checked){
				 while(!sr->EndOfStream)
				{
					String^ row=Convert::ToString(sr->ReadLine());
					array<Char>^ splitter={'\t'};
			       	array<String^>^ arr=row->Split(splitter);
					if(student_search->Text+"  "==arr[0]){
						listBox4->Items->Add(row);	
					}
				}
			 }
			 else{
				 MessageBox::Show("Please Select ID Or Name" , "Error", MessageBoxButtons::OK , MessageBoxIcon::Error);
			 }
			 sr->Close();
		 }
};
}