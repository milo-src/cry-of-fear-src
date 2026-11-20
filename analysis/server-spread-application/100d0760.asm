
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d0760 <.text+0xcf760>:
100d0760:	55                   	push   ebp
100d0761:	8b ec                	mov    ebp,esp
100d0763:	51                   	push   ecx
100d0764:	56                   	push   esi
100d0765:	8b f1                	mov    esi,ecx
100d0767:	e8 f4 f7 ff ff       	call   0x100cff60
100d076c:	8b b6 f8 01 00 00    	mov    esi,DWORD PTR [esi+0x1f8]
100d0772:	8d 45 fc             	lea    eax,[ebp-0x4]
100d0775:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100d0778:	ff 76 38             	push   DWORD PTR [esi+0x38]
100d077b:	50                   	push   eax
100d077c:	e8 0f fc ff ff       	call   0x100d0390
100d0781:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100d0786:	8d 46 2c             	lea    eax,[esi+0x2c]
100d0789:	83 c4 04             	add    esp,0x4
100d078c:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d0791:	50                   	push   eax
100d0792:	8d 46 20             	lea    eax,[esi+0x20]
100d0795:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100d0798:	50                   	push   eax
100d0799:	56                   	push   esi
100d079a:	e8 71 f7 ff ff       	call   0x100cff10
100d079f:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100d07a4:	83 c4 10             	add    esp,0x10
100d07a7:	f3 0f 11 46 08       	movss  DWORD PTR [esi+0x8],xmm0
100d07ac:	8b c6                	mov    eax,esi
100d07ae:	5e                   	pop    esi
100d07af:	8b e5                	mov    esp,ebp
100d07b1:	5d                   	pop    ebp
100d07b2:	c2 04 00             	ret    0x4
