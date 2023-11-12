#pragma once
#include <cmath>
#include <math.h>
#using <System.Windows.Forms.DataVisualization.dll>

namespace Fost33 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBoxV1;
	private: System::Windows::Forms::TextBox^ textBoxT1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBoxV1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxT1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 22);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Задание 3";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(261, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 34);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBoxV1
			// 
			this->textBoxV1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV1->Location = System::Drawing::Point(12, 689);
			this->textBoxV1->Name = L"textBoxV1";
			this->textBoxV1->Size = System::Drawing::Size(370, 26);
			this->textBoxV1->TabIndex = 27;
			// 
			// textBoxT1
			// 
			this->textBoxT1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxT1->Location = System::Drawing::Point(12, 643);
			this->textBoxT1->Name = L"textBoxT1";
			this->textBoxT1->Size = System::Drawing::Size(370, 26);
			this->textBoxT1->TabIndex = 26;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 733);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(370, 36);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Задание номер 3";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			chartArea5->AxisX->Minimum = 0;
			chartArea5->AxisX->Title = L"Время t, c";
			chartArea5->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea5->AxisX2->Minimum = 0;
			chartArea5->AxisY->Minimum = 0;
			chartArea5->AxisY->Title = L"Скорость V, м/с";
			chartArea5->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea5->AxisY2->Minimum = 0;
			chartArea5->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea5);
			legend5->Enabled = false;
			legend5->Name = L"Legend1";
			this->chart1->Legends->Add(legend5);
			this->chart1->Location = System::Drawing::Point(12, 43);
			this->chart1->Name = L"chart1";
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Blue;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chart1->Series->Add(series5);
			this->chart1->Size = System::Drawing::Size(370, 280);
			this->chart1->TabIndex = 28;
			this->chart1->Text = L"chart1";
			title5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title5->Name = L"Title1";
			title5->Text = L"График зависимости v от t";
			this->chart1->Titles->Add(title5);
			// 
			// chart2
			// 
			chartArea6->AxisX->Minimum = 0;
			chartArea6->AxisX->Title = L"Время t, с";
			chartArea6->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea6->AxisX2->Minimum = 0;
			chartArea6->AxisY->Minimum = 0;
			chartArea6->AxisY->Title = L"Высота полета H, м";
			chartArea6->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea6->AxisY2->Minimum = 0;
			chartArea6->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea6);
			legend6->Enabled = false;
			legend6->Name = L"Legend1";
			this->chart2->Legends->Add(legend6);
			this->chart2->Location = System::Drawing::Point(12, 343);
			this->chart2->Name = L"chart2";
			series6->BorderWidth = 3;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::Red;
			series6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			series6->Legend = L"Legend1";
			series6->Name = L"Series1";
			this->chart2->Series->Add(series6);
			this->chart2->Size = System::Drawing::Size(370, 280);
			this->chart2->TabIndex = 29;
			this->chart2->Text = L"chart2";
			title6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title6->Name = L"Title1";
			title6->Text = L"График зависимости h от t";
			this->chart2->Titles->Add(title6);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 626);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 14);
			this->label2->TabIndex = 30;
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
			this->label3->TabIndex = 31;
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
			this->Controls->Add(this->textBoxV1);
			this->Controls->Add(this->textBoxT1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fost_3_3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		const double g = 9.8;
		const double pi = 3.14;
		double f2(double V, double m, double m_, double k) {
			return ((m_ * g / m) - (k * V / m));
		}

		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			chart1->Series["Series1"]->Points->Clear();
			chart2->Series["Series1"]->Points->Clear();
			textBoxT1->Clear();
			textBoxV1->Clear();
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			double V0, H0, k, V, Vt, m, m_, y, r, p, c, pt, a, b;

			const double dt = 0.002;

			H0 = 0;
			V0 = 0;
			c = 530;
			r = 0.1;
			p = 750;
			pt = 8890;

			V = V0;
			y = H0;
			k = 6 * pi * c * r;
			m = (4 / 3) * pi * r * r * r * pt;
			m_ = (pt - p) * (4 / 3) * pi * r * r * r;
			
			for (double t = 0; V != Vt; t += dt) {
				chart1->Series["Series1"]->Points->AddXY(t, V);
				Vt = V;
				V = V + dt * 0.5 * (f2(V, m, m_, k) + f2(V + dt * f2(V, m, m_, k), m, m_, k));

				chart2->Series["Series1"]->Points->AddXY(t, y);
				y += V * dt;
				a = round(t*100)/100;
				textBoxT1->Text = Convert::ToString(a);
				if (abs(V) - abs(Vt) <= abs(0.0001)) {
					b = round(V*100)/100;
					textBoxV1->Text = Convert::ToString(b);
					break;
				}
			}
		}
};
}
