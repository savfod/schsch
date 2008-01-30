#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Sched {

	/// <summary>
	/// Summary for form
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class form : public System::Windows::Forms::Form
	{
	public:
		form(void)
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
		~form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;

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
			System::Windows::Forms::ListViewGroup^  listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"ListViewGroup", System::Windows::Forms::HorizontalAlignment::Left));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(-1, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(273, 227);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(265, 201);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(265, 201);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(265, 201);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(265, 201);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
			listViewGroup1->Header = L"ListViewGroup";
			listViewGroup1->Name = L"listViewGroup1";
			this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(1) {listViewGroup1});
			this->listView1->Location = System::Drawing::Point(9, 15);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(240, 168);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &form::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Width = 99;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Width = 94;
			// 
			// form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 264);
			this->Controls->Add(this->tabControl1);
			this->Name = L"form";
			this->Text = L"form";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
