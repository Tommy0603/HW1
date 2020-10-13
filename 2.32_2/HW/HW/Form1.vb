
Public Class Form1
    Dim A, B, C As Double
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        A = TextBox1.Text
        B = TextBox2.Text
        C = B / ((A / 100) * (A / 100))
        Label6.Text = Format(C, "0.00")
        If C < 18.5 Then
            Label5.Text = "Under less"
        ElseIf C >= 18.5 And C <= 24.9 Then
            Label5.Text = "Normal"
        ElseIf C >= 25 And C <= 29.9 Then
            Label5.Text = "OverWeight"
        Else
            Label5.Text = "Obese"
        End If
    End Sub

End Class
