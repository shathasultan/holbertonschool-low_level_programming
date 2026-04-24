# Holberton School - Low Level Programming
This repository contains low-level programming tasks for **Holberton School**. It includes:

- Linked lists
- Memory management
- File I/O
- And more...

## Tasks

- **1-list_len.c**: A function that returns the length of a linked list.
- **2-add_node.c**: A function that adds a new node at the beginning of a list.

## How to use

1. Clone the repository:
    ```bash
    git clone https://github.com/shathasultan/holbertonschool-low_level_programming.git
    ```

2. Compile the code:
    ```bash
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o main
    ```

3. Run the program:
    ```bash
    ./main
    ```

## License

This project is licensed under the MIT License.





graph TD
    %% تعريف الستايلات
    classDef yellowBox fill:#f1d53f,stroke:#333,stroke-width:2px;
    classDef walletBox fill:#e1f5fe,stroke:#01579b,stroke-width:2px;
    classDef dashBox fill:#e8f5e9,stroke:#2e7d32,stroke-width:2px;
    classDef alert fill:#ffebee,stroke:#c62828,stroke-width:2px;

    %% 1. البداية والصفحة الرئيسية
    Start((دخول الموقع)) --> Home[الصفحة الرئيسية]
    Home --> Motion[موشن جرافيك تعريفي]
    Home --> Awareness[نشرات توعوية صحية ورقمية]
    Home --> News[قسم النشرات]
    
    %% 2. تسجيل الرفيق (تفصيل المستندات والبيانات)
    Home --> ProviderReg[إنشاء حساب رفيق]
    
    subgraph "بيانات الرفيق المفصلة"
    ProviderReg --> PD1[الاسم الأول والأخير]
    PD1 --> PD2[رقم الجوال والبريد]
    PD2 --> PD3[تاريخ الميلاد والجنس]
    PD3 --> PD4[الجنسية واللغة]
    PD4 --> PD5[المدينة والحي]
    PD5 --> PD6[وصف مختصر للرفيق]
    PD6 --> PD7[هل تعاني من أمراض مزمنة؟]
    end

    subgraph "قسم المستندات والوثائق"
    PD7 --> Doc1[صورة الهوية الوطنية / الإقامة]
    Doc1 --> Doc2[صور الشهادات العلمية / التدريبية]
    Doc2 --> Doc3[صورة شخصية حديثة]
    Doc3 --> Doc4[رقم الآيبان IBAN والبنك]
    Doc4 --> Doc5[بيانات السيارة: النوع، الموديل، اللوحة]
    end
    
    Doc5 --> Admin[بانتظار موافقة الإدارة]

    %% 3. شاشة الرفيق الرئيسية (الداشبورد)
    Admin --> Auth[تسجيل الدخول]
    Auth --> Dashboard[شاشة الرفيق الرئيسية]
    
    subgraph "محتويات شاشة الرفيق"
    Dashboard --> D1[زر حالة الاتصال: متصل / غير متصل]
    Dashboard --> D2[ملخص سريع: أرباح اليوم]
    Dashboard --> D3[قائمة الطلبات القريبة المتاحة]
    Dashboard --> D4[تنبيهات المهام القادمة]
    Dashboard --> D5[تقييم الرفيق الحالي]
    end

    %% 4. مسار طلب الخدمة (تفصيل الممل للعميل)
    Home --> Order[طلب خدمة]
    Order --> UserType{لمن الطلب؟}
    
    UserType -- لنفسي --> Health1[البيانات الصحية: ربو، قلب، سكر، صرع]
    UserType -- لغيري --> OtherData[اسم المتلقي، عمره، جواله]
    OtherData --> Health2[البيانات الصحية للمتلقي]
    
    Health1 & Health2 --> ServiceDetails[تخصيص الخدمة]
    subgraph "تفاصيل الطلب الدقيقة"
    ServiceDetails --> T1[نوع المساعدة: مرافقة، تسوق، كافيه، إلخ]
    T1 --> T2[ساعات العمل: السعر محدد بالساعة]
    T2 --> T3[الموقع: التقاء + وجهة]
    T3 --> T4[رقم طوارئ + ملاحظات: ضعف سمع، إلخ]
    T4 --> T5[الاحتياج لسيارة نقل: نعم / لا]
    end

    %% 5. الدفع والشات والرحلة
    T5 --> Payment[دفع المبلغ إلكترونياً]
    Payment --> Match{اتفاق الطرفين؟}
    Match -- لا --> Refund[إلغاء واسترداد المبلغ للعميل]
    Match -- نعم --> Trip[شاشة الرحلة: خريطة + شات + بيانات السيارة]

    %% 6. المحفظة (تفصيل الأرباح)
    Trip --> Finish[إنهاء الخدمة]
    Finish --> Wallet[محفظة الرفيق]
    
    subgraph "محتويات المحفظة"
    Wallet --> W1[إجمالي الرصيد القابل للسحب]
    Wallet --> W2[أرباح الشهر الحالي]
    Wallet --> W3[سجل العمليات: كل مشوار وصافي ربحه]
    Wallet --> W4[حالة الدفع: معلق / مكتمل]
    Wallet --> W5[زر طلب تحويل للبنك]
    end

    W5 --> Rate[تقييم العميل والعودة للرئيسية]

    %% الستايلات
    class Home,Motion,Awareness,Dashboard,D1,D2,D3,D4,D5 yellowBox;
    class Wallet,W1,W2,W3,W4,W5 walletBox;
    class Dashboard dashBox;
    class Refund alert;
