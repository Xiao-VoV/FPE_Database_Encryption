# FPE_Database_Encryption

# 基于格式保留的SQL server 数据库加密程序

Format Preserving Encryption in SQL server
### 基本功能：
    !简单的MFC界面!

    !教科书式的AES加密!

    !基本的增删改查!

    !基本的数据库增删改查功能!

程序运行需要建立一个表
```
      create table score (
          stuid varchar(50),
          stuname varchar(50),
          stuclass varchar(50),
          usualscore int,
          testscore int,
          totalscore varchar(50),

          primary key (stuid),

      );
```

## 注意事项！
   **删除score.h 和 score.cpp 文件**
   **并使用 MFC ODBC使用者连接数据库（VS2019及更高版本不再支持）**
