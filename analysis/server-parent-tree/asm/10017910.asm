
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017910 <.text+0x16910>:
10017910:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
10017913:	8b 82 98 02 00 00    	mov    eax,DWORD PTR [edx+0x298]
10017919:	85 c0                	test   eax,eax
1001791b:	75 08                	jne    0x10017925
1001791d:	89 41 78             	mov    DWORD PTR [ecx+0x78],eax
10017920:	e9 ab 01 00 00       	jmp    0x10017ad0
10017925:	f3 0f 7e 80 88 00 00 	movq   xmm0,QWORD PTR [eax+0x88]
1001792c:	00 
1001792d:	66 0f d6 42 08       	movq   QWORD PTR [edx+0x8],xmm0
10017932:	8b 80 90 00 00 00    	mov    eax,DWORD PTR [eax+0x90]
10017938:	89 42 10             	mov    DWORD PTR [edx+0x10],eax
1001793b:	8b 01                	mov    eax,DWORD PTR [ecx]
1001793d:	51                   	push   ecx
1001793e:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10017945:	ff 50 08             	call   DWORD PTR [eax+0x8]
10017948:	c3                   	ret
