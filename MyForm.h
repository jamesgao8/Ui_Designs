#pragma once

namespace UiDesign {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{ if (components) { delete components;} }
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: bool draggingVari;
	private: Point OffsetPo;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::DarkOrange;
			this->button1->Location = System::Drawing::Point(786, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(52, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(0, 95);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 389);
			this->panel1->TabIndex = 1;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(1, 78);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 78);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Calendar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			this->button3->MouseLeave += gcnew System::EventHandler(this, &MyForm::Button3_MouseLeave);
			this->button3->MouseHover += gcnew System::EventHandler(this, &MyForm::Button3_MouseHover);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(1, 155);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(183, 78);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Tasks";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &MyForm::Button4_MouseLeave);
			this->button4->MouseHover += gcnew System::EventHandler(this, &MyForm::Button4_MouseHover);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 78);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Dashboard";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			this->button2->MouseLeave += gcnew System::EventHandler(this, &MyForm::Button2_MouseLeave);
			this->button2->MouseHover += gcnew System::EventHandler(this, &MyForm::Button2_MouseHover);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(185, 95);
			this->panel3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(20, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Calendar";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(188, 32);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(638, 452);
			this->panel2->TabIndex = 2;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(838, 484);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Opacity = 0.95;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		this->draggingVari = true; 
		this->OffsetPo = Point(e->X, e->Y);
	}
	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (this->draggingVari)
		{
			Point CurrScrPos = PointToScreen(e->Location);
			Location = Point(CurrScrPos.X - this->OffsetPo.X, 
				CurrScrPos.Y - this->OffsetPo.Y);
		}
	}
	private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		this->draggingVari = false;
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label1->Text = "Dashboard";
	
	
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) 
{ 
	this->label1->Text = "Calendar"; 
}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label1->Text = "Tasks";
}
private: System::Void Button2_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
	this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>
		(static_cast<System::Byte>(33)), 
		static_cast<System::Int32>
		(static_cast<System::Byte>(33)),
		static_cast<System::Int32>
		(static_cast<System::Byte>(33)));
}
private: System::Void Button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) 
{
	this->button2->BackColor = System::Drawing::Color::FromArgb
	(static_cast<System::Int32>
		(static_cast<System::Byte>(23)), 
		static_cast<System::Int32>
		(static_cast<System::Byte>(23)), 
		static_cast<System::Int32>
		(static_cast<System::Byte>(23)));
}
private: System::Void Button3_MouseHover(System::Object^ sender, System::EventArgs^ e) 
{
	this->button3->BackColor = System::Drawing::Color::FromArgb
	(static_cast<System::Int32>
		(static_cast<System::Byte>(33)), 
		static_cast<System::Int32>
		(static_cast<System::Byte>(33)), 
		static_cast<System::Int32>
		(static_cast<System::Byte>(33)));
}
private: System::Void Button3_MouseLeave(System::Object^ sender, System::EventArgs^ e) 
{
	this->button3->BackColor = System::Drawing::Color::FromArgb
	
	(static_cast<System::Int32>
		(static_cast<System::Byte>(23)), 
		static_cast<System::Int32>
		(static_cast<System::Byte>(23)),
		static_cast<System::Int32>
		(static_cast<System::Byte>(23)));
}
private: System::Void Button4_MouseHover(System::Object^ sender, System::EventArgs^ e) 
{
	this->button4->BackColor = System::Drawing::Color::FromArgb
	(static_cast<System::Int32>
		(static_cast<System::Byte>(33)), 
		static_cast<System::Int32>
		(static_cast<System::Byte>(33)), 
		static_cast<System::Int32>
		(static_cast<System::Byte>(33)));
}
private: System::Void Button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) 
{
	this->button4->BackColor = System::Drawing::Color::FromArgb
	(static_cast<System::Int32>
		(static_cast<System::Byte>(23)), 
		static_cast<System::Int32>
		(static_cast<System::Byte>(23)),
		static_cast<System::Int32>
		(static_cast<System::Byte>(23)));
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
{

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}
