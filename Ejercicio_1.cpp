#include <stdio.h>

using namespace std;

int main()
{
    int meses, year, dia;
    int a, y, m, d, i;


    printf("Ingrese el a\xa4o del calendario: ");
    scanf("%d", & year);
    printf("Su a\xa4o es: %d\n\n", year);
    for(meses=1; meses <=12; meses++)
    {
        switch(meses)
        {
        case 1:

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;
            printf("%d\n", d);
            printf("%d\n", a);
            printf("%d\n", y);
            printf("%d\n", m);
            printf("%d\n", year);
            printf("%d\n", meses);

            printf("Enero: \n");
            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }

            break;
        case 2:
            printf("\nFebrero: \n");
            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;

            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 3:
            printf("\nMarzo: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;


            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 4:
            printf("\nAbril: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;

            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 5:
            printf("\nMayo: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;


            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 6:
            printf("\nJunio: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;

            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 7:
            printf("\nJulio: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;

            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 8:
            printf("\nAgosto: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;

            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 9:
            printf("\nSeptiembre: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;

            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 10:
            printf("\nOctubre: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;

            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 11:
            printf("\nNoviembre: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;

            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        case 12:
            printf("\nDiciembre: \n");

            a=(14-meses)/12;
            y=year-a;
            m=meses+12*a-2;
            dia=1;
            d=(dia + y + y/4 - y/100 + y/400 + (31*m)/12 ) % 7;

            printf("Dom Lun Mar Mie Jue Vie Sab\n");

            for(i=0; i<d; i++)
            {
                printf("    ");
            }


            for(dia=1; dia<=30; dia++)
            {
                printf("%3d ", dia);
                d++;
                if(d%7==0)
                {
                    printf("\n");
                }
            }
            break;
        }
    }


    return 0;
}
