
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102a80 <.text+0x101a80>:
10102a80:	55                   	push   ebp
10102a81:	8b ec                	mov    ebp,esp
10102a83:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10102a86:	8b 90 cc 01 00 00    	mov    edx,DWORD PTR [eax+0x1cc]
10102a8c:	85 d2                	test   edx,edx
10102a8e:	74 28                	je     0x10102ab8
10102a90:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10102a95:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10102a9a:	51                   	push   ecx
10102a9b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10102aa0:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10102aa3:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10102aa9:	51                   	push   ecx
10102aaa:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10102aad:	03 c2                	add    eax,edx
10102aaf:	50                   	push   eax
10102ab0:	e8 3b f5 ff ff       	call   0x10101ff0
10102ab5:	83 c4 14             	add    esp,0x14
10102ab8:	5d                   	pop    ebp
10102ab9:	c2 0c 00             	ret    0xc
