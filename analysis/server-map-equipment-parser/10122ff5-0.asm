
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10122ff5 <.text+0x121ff5>:
10122ff5:	55                   	push   ebp
10122ff6:	8b ec                	mov    ebp,esp
10122ff8:	56                   	push   esi
10122ff9:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10122ffc:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10122fff:	85 c0                	test   eax,eax
10123001:	74 10                	je     0x10123013
10123003:	fe 88 a8 23 23 10    	dec    BYTE PTR [eax+0x102323a8]
10123009:	8a 80 a8 23 23 10    	mov    al,BYTE PTR [eax+0x102323a8]
1012300f:	84 c0                	test   al,al
10123011:	7f 1f                	jg     0x10123032
10123013:	8b ce                	mov    ecx,esi
10123015:	e8 1b 00 00 00       	call   0x10123035
1012301a:	8b 76 30             	mov    esi,DWORD PTR [esi+0x30]
1012301d:	85 f6                	test   esi,esi
1012301f:	74 11                	je     0x10123032
10123021:	8b ce                	mov    ecx,esi
10123023:	e8 b8 d7 f0 ff       	call   0x100307e0
10123028:	6a 08                	push   0x8
1012302a:	56                   	push   esi
1012302b:	e8 75 ab 01 00       	call   0x1013dba5
10123030:	59                   	pop    ecx
10123031:	59                   	pop    ecx
10123032:	5e                   	pop    esi
10123033:	5d                   	pop    ebp
10123034:	c3                   	ret
