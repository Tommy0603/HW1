Public Class Form1
    Dim a, b, c, d, f, g As Double
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        a = TextBox1.Text
        b = TextBox2.Text
        c = TextBox3.Text
        d = TextBox4.Text
        f = TextBox5.Text

        g = (a * (b / c)) + d + f

        Label6.Text = Format(g, "0.00")
    End Sub
End Class
