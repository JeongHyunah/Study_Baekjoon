using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week01
{
    class _25206
    {
        static void Main(string[] args)
        {
            // Try : 5 ( Compile Error(1) Fail (3) Success(1) )
            // 20241101
            const int LOOP = 20;
            double dTotal = 0, dTarget = 0, dResult = 0;

            for (int i = 0; i < LOOP; i++)
            {
                string sString = Console.ReadLine();
                char[] delimiterChars = { ' ' };
                string[] arrString = sString.Split(delimiterChars, StringSplitOptions.RemoveEmptyEntries);

                switch (arrString[2])
                {
                    case "A+":
                        dTotal += double.Parse(arrString[1]) * 4.5;
                        dTarget += double.Parse(arrString[1]);
                        break;

                    case "A0":
                        dTotal += double.Parse(arrString[1]) * 4.0;
                        dTarget += double.Parse(arrString[1]);
                        break;

                    case "B+":
                        dTotal += double.Parse(arrString[1]) * 3.5;
                        dTarget += double.Parse(arrString[1]);
                        break;

                    case "B0":
                        dTotal += double.Parse(arrString[1]) * 3.0;
                        dTarget += double.Parse(arrString[1]);
                        break;

                    case "C+":
                        dTotal += double.Parse(arrString[1]) * 2.5;
                        dTarget += double.Parse(arrString[1]);
                        break;

                    case "C0":
                        dTotal += double.Parse(arrString[1]) * 2.0;
                        dTarget += double.Parse(arrString[1]);
                        break;

                    case "D+":
                        dTotal += double.Parse(arrString[1]) * 1.5;
                        dTarget += double.Parse(arrString[1]);
                        break;

                    case "D0":
                        dTotal += double.Parse(arrString[1]) * 1.0;
                        dTarget += double.Parse(arrString[1]);
                        break;

                    case "F":
                        dTotal += double.Parse(arrString[1]) * 0.0;
                        dTarget += double.Parse(arrString[1]);
                        break;
                }
            }
            if (dTotal != 0 && dTarget != 0)
                dResult = dTotal / dTarget;

            string sResult = dResult.ToString("0.000000");
            Console.WriteLine($"{sResult}");
            //Console.ReadKey();    // Error : InvalidOperation 발생, 원치않은 입출력이라서 그런 듯?
        }
    }
}
