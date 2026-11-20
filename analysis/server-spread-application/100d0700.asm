
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d0700 <.text+0xcf700>:
100d0700:	55                   	push   ebp
100d0701:	8b ec                	mov    ebp,esp
100d0703:	51                   	push   ecx
100d0704:	56                   	push   esi
100d0705:	8b f1                	mov    esi,ecx
100d0707:	e8 54 f8 ff ff       	call   0x100cff60
100d070c:	8b b6 f8 01 00 00    	mov    esi,DWORD PTR [esi+0x1f8]
100d0712:	8d 45 fc             	lea    eax,[ebp-0x4]
100d0715:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100d0718:	ff 76 70             	push   DWORD PTR [esi+0x70]
100d071b:	50                   	push   eax
100d071c:	e8 6f fc ff ff       	call   0x100d0390
100d0721:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100d0726:	8d 46 64             	lea    eax,[esi+0x64]
100d0729:	83 c4 04             	add    esp,0x4
100d072c:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d0731:	50                   	push   eax
100d0732:	8d 46 58             	lea    eax,[esi+0x58]
100d0735:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100d0738:	50                   	push   eax
100d0739:	56                   	push   esi
100d073a:	e8 d1 f7 ff ff       	call   0x100cff10
100d073f:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100d0744:	83 c4 10             	add    esp,0x10
100d0747:	f3 0f 11 46 08       	movss  DWORD PTR [esi+0x8],xmm0
100d074c:	8b c6                	mov    eax,esi
100d074e:	5e                   	pop    esi
100d074f:	8b e5                	mov    esp,ebp
100d0751:	5d                   	pop    ebp
100d0752:	c2 04 00             	ret    0x4
