using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Week01
{
    class _1316
    {
        static void Main(string[] args)
        {
            // Try : 2 ( InvalidOperation(1) Success(1) )
            // 20241101
            int iGrop = 0, isGrop = 0;
            int index = 0;

            string sCount = Console.ReadLine();
            if (int.TryParse(sCount, out int iCount))
            {
                for (int i = 0; i < iCount; i++)
                {
                    string sValue = Console.ReadLine();

                    for (int k = 0; k < sValue.Length; k++)
                    {
                        index = 0;
                        char target = sValue[k];

                        for (int l = k + 1; l < sValue.Length; l++)
                        {
                            if (target == sValue[l])
                            {
                                index++;
                                if (l != k + index)
                                {
                                    isGrop = 0;
                                    break;
                                }
                                else
                                    isGrop = 1;
                            }
                            else
                                isGrop = 1;
                        }
                        if (isGrop == 0) break;
                    }
                    if (sValue.Length <= 1)
                        isGrop = 1;

                    iGrop += isGrop;
                }
            }
            Console.WriteLine($"{iGrop}");
            //Console.ReadKey();    // Error : InvalidOperation 발생, 원치않은 입출력이라서 그런 듯?
        }
    }
}
