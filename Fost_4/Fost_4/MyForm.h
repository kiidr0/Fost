#pragma once
#include <math.h>
#include <iostream>
#using <System.Windows.Forms.DataVisualization.dll>

namespace Fost4 {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->Minimum = 0;
			chartArea1->AxisX->Title = L"Время t";
			chartArea1->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea1->AxisY->Minimum = 0;
			chartArea1->AxisY->Title = L"Скорость V";
			chartArea1->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 6);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Blue;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(300, 437);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title1->Name = L"Title1";
			title1->Text = L"График зависимости V от t";
			this->chart1->Titles->Add(title1);
			// 
			// chart2
			// 
			chartArea2->AxisX->Minimum = 0;
			chartArea2->AxisX->Title = L"Время t";
			chartArea2->AxisX->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea2->AxisY->Minimum = 0;
			chartArea2->AxisY->Title = L"Высота H";
			chartArea2->AxisY->TitleFont = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Enabled = false;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(318, 6);
			this->chart2->Name = L"chart2";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(300, 437);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			title2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title2->Name = L"Title1";
			title2->Text = L"График зависимости H от t";
			this->chart2->Titles->Add(title2);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 449);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 30);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(316, 449);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(302, 30);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 482);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fost_4";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		const double p0 = 1.27; // плотность вблизи поверхности Земли
		const double beta = -2.3026; // бета из методички
		const double g = 9.8; // коэф. свободного падения
		const double v_ = 7800;	// первая космическая скорость
		const double h_ = 17000; // 17км из методички
		const double c = 0.045;

		double f(double t, double k) {
			if (t > 1)
				return k;
			else
				return (1 - ((1 - k) * t));
		}

		double Vdt(double t, double a, double b, double p, double H, double V, double k) {
			return ((1 / f(t, k)) * (a - b * f(t, k) - p * exp(beta * H) * V * V));
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			double m0 = 280000;
			double mEnd = 47300;
			double Ft = 13002000;
			double fuel = 1297;
			double S = 11;

			const double dt = 0.001;
			double t = 0, H = 0, V = 0;
			double nextV = 0, nextH = 0;

			double t_ = (m0 - mEnd) / fuel;

			double a = (Ft * t_) / (m0 * v_);
			double b = ((t_ * g) / v_);
			double ee = ((v_ * t_) / h_);
			double p = 0.5 * c * p0 * S * v_ * t_ / m0;
			double k = mEnd / m0;

			do
			{
				nextV = V + dt * 0.5 * abs(Vdt(t, a, b, p, H, V, k) + Vdt(t, a, b, p, H, V + dt * Vdt(t, a, b, p, H, V, k), k));
				nextH = H + ee * V * dt;
				chart1->Series["Series1"]->Points->AddXY(t, V);
				chart2->Series["Series1"]->Points->AddXY(t, H);
				V = nextV;
				H = nextH;
				t += dt;
			} while (V <= 1);
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
				chart1->Series["Series1"]->Points->Clear();
				chart2->Series["Series1"]->Points->Clear();
		}
};
}
