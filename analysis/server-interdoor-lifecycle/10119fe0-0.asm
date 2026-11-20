
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119fe0 <.text+0x118fe0>:
10119fe0:	55                   	push   ebp
10119fe1:	8b ec                	mov    ebp,esp
10119fe3:	56                   	push   esi
10119fe4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10119fe7:	8b ce                	mov    ecx,esi
10119fe9:	8b 06                	mov    eax,DWORD PTR [esi]
10119feb:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10119ff1:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10119ff4:	85 c0                	test   eax,eax
10119ff6:	74 15                	je     0x1011a00d
10119ff8:	f3 0f 7e 01          	movq   xmm0,QWORD PTR [ecx]
10119ffc:	66 0f d6 86 18 06 00 	movq   QWORD PTR [esi+0x618],xmm0
1011a003:	00 
1011a004:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
1011a007:	89 86 20 06 00 00    	mov    DWORD PTR [esi+0x620],eax
1011a00d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011a010:	51                   	push   ecx
1011a011:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011a017:	ff 15 b8 2f 22 10    	call   DWORD PTR ds:0x10222fb8
1011a01d:	83 c4 08             	add    esp,0x8
1011a020:	5e                   	pop    esi
1011a021:	5d                   	pop    ebp
1011a022:	c3                   	ret
