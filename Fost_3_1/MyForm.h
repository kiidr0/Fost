#pragma once
#include <cmath>
#include <math.h>
#using <System.Windows.Forms.DataVisualization.dll>

namespace Fost31 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxV1;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxT1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->textBoxV1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxT1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxV1
			// 
			this->textBoxV1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV1->Location = System::Drawing::Point(12, 689);
			this->textBoxV1->Name = L"textBoxV1";
			this->textBoxV1->Size = System::Drawing::Size(370, 26);
			this->textBoxV1->TabIndex = 18;
			// 
			// textBoxT1
			// 
			this->textBoxT1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxT1->Location = System::Drawing::Point(12, 643);
			this->textBoxT1->Name = L"textBoxT1";
			this->textBoxT1->Size = System::Drawing::Size(370, 26);
			this->textBoxT1->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 733);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(370, 36);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Задание номер 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 22);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Задание 1";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(261, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 34);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// chart1
			// 
			chartArea3->AxisX->Minimum = 0;
			chartArea3->AxisX->Title = L"Время t, с";
			chartArea3->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisX2->Minimum = 0;
			chartArea3->AxisY->Minimum = 0;
			chartArea3->AxisY->Title = L"Высота полета H, м";
			chartArea3->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea3->AxisY2->Minimum = 0;
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend3->Enabled = false;
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(12, 343);
			this->chart1->Name = L"chart1";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Red;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(370, 280);
			this->chart1->TabIndex = 21;
			this->chart1->Text = L"chart2";
			title3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title3->Name = L"Title1";
			title3->Text = L"График зависимости h от t";
			this->chart1->Titles->Add(title3);
			// 
			// chart2
			// 
			chartArea4->AxisX->Minimum = 0;
			chartArea4->AxisX->Title = L"Время t, с";
			chartArea4->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea4->AxisX2->Minimum = 0;
			chartArea4->AxisY->Minimum = 0;
			chartArea4->AxisY->Title = L"Скорость V, м/с";
			chartArea4->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea4->AxisY2->Minimum = 0;
			chartArea4->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea4);
			legend4->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend4->Enabled = false;
			legend4->Name = L"Legend1";
			this->chart2->Legends->Add(legend4);
			this->chart2->Location = System::Drawing::Point(12, 43);
			this->chart2->Name = L"chart2";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Blue;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(370, 280);
			this->chart2->TabIndex = 22;
			this->chart2->Text = L"chart1";
			title4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title4->Name = L"Title1";
			title4->Text = L"График зависимости v от t";
			title4->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			this->chart2->Titles->Add(title4);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 626);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 14);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Время набора постоянной скорости, с";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 672);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 14);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Постоянная скорость м/с";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 781);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxV1);
			this->Controls->Add(this->textBoxT1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fost_3_1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		const double g = 9.8;
		const double pi = 3.14;
		double f(double V, double m, double k) {
			return (g - (k * V * V / m));
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			chart1->Series["Series1"]->Points->Clear();
			chart2->Series["Series1"]->Points->Clear();
			textBoxT1->Clear();
			textBoxV1->Clear();
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			double V0, H0, k, V, Vt, t, m, y, h, sC, p, c, a;

			const double dt = 2;

			V0 = 0;
			m = 64;
			h = 1.53;
			sC = 0.4;
			p = 1.29;
			c = 1.22; // коэфф лобового столкновения
			H0 = 0;

			V = V0;
			y = H0;
			k = 0.5 * h * sC * c * p; // коэф. квадратичной составляющей скорости

			for (double t = 0; V != Vt; t += dt) {
				chart1->Series["Series1"]->Points->AddXY(t, V);

				Vt = V;
				V = V + dt * 0.5 * (f(V, m, k) + f(V + dt * f(V, m, k), m, k));

				chart2->Series["Series1"]->Points->AddXY(t, y);
				y += V * dt;
				textBoxT1->Text = Convert::ToString(t);
				if (abs(V) - abs(Vt) <= abs(0.1)) {
					a = trunc(V);
					textBoxV1->Text = Convert::ToString(a);
					break;
				}
			}
		}
};
}
