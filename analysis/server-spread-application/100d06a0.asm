
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d06a0 <.text+0xcf6a0>:
100d06a0:	55                   	push   ebp
100d06a1:	8b ec                	mov    ebp,esp
100d06a3:	51                   	push   ecx
100d06a4:	56                   	push   esi
100d06a5:	8b f1                	mov    esi,ecx
100d06a7:	e8 b4 f8 ff ff       	call   0x100cff60
100d06ac:	8b b6 f8 01 00 00    	mov    esi,DWORD PTR [esi+0x1f8]
100d06b2:	8d 45 fc             	lea    eax,[ebp-0x4]
100d06b5:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100d06b8:	ff 76 38             	push   DWORD PTR [esi+0x38]
100d06bb:	50                   	push   eax
100d06bc:	e8 cf fc ff ff       	call   0x100d0390
100d06c1:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100d06c6:	8d 46 2c             	lea    eax,[esi+0x2c]
100d06c9:	83 c4 04             	add    esp,0x4
100d06cc:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d06d1:	50                   	push   eax
100d06d2:	8d 46 20             	lea    eax,[esi+0x20]
100d06d5:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100d06d8:	50                   	push   eax
100d06d9:	56                   	push   esi
100d06da:	e8 31 f8 ff ff       	call   0x100cff10
100d06df:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100d06e4:	83 c4 10             	add    esp,0x10
100d06e7:	f3 0f 11 46 08       	movss  DWORD PTR [esi+0x8],xmm0
100d06ec:	8b c6                	mov    eax,esi
100d06ee:	5e                   	pop    esi
100d06ef:	8b e5                	mov    esp,ebp
100d06f1:	5d                   	pop    ebp
100d06f2:	c2 04 00             	ret    0x4
