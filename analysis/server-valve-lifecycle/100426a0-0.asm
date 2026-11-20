
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100426a0 <.text+0x416a0>:
100426a0:	57                   	push   edi
100426a1:	8b f9                	mov    edi,ecx
100426a3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100426a6:	8b 88 d8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d8]
100426ac:	85 c9                	test   ecx,ecx
100426ae:	74 4e                	je     0x100426fe
100426b0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100426b5:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100426bb:	03 c1                	add    eax,ecx
100426bd:	50                   	push   eax
100426be:	6a 00                	push   0x0
100426c0:	e8 cb 5e 0d 00       	call   0x10118590
100426c5:	83 c4 08             	add    esp,0x8
100426c8:	85 c0                	test   eax,eax
100426ca:	74 32                	je     0x100426fe
100426cc:	56                   	push   esi
100426cd:	50                   	push   eax
100426ce:	8d 8f 98 01 00 00    	lea    ecx,[edi+0x198]
100426d4:	e8 67 50 fd ff       	call   0x10017740
100426d9:	8d 8f 98 01 00 00    	lea    ecx,[edi+0x198]
100426df:	e8 bc 50 fd ff       	call   0x100177a0
100426e4:	5e                   	pop    esi
100426e5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100426e8:	f3 0f 7e 40 50       	movq   xmm0,QWORD PTR [eax+0x50]
100426ed:	66 0f d6 87 8c 01 00 	movq   QWORD PTR [edi+0x18c],xmm0
100426f4:	00 
100426f5:	8b 40 58             	mov    eax,DWORD PTR [eax+0x58]
100426f8:	89 87 94 01 00 00    	mov    DWORD PTR [edi+0x194],eax
100426fe:	8b 07                	mov    eax,DWORD PTR [edi]
10042700:	51                   	push   ecx
10042701:	8b cf                	mov    ecx,edi
10042703:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1004270a:	ff 50 08             	call   DWORD PTR [eax+0x8]
1004270d:	c7 47 78 00 2a 04 10 	mov    DWORD PTR [edi+0x78],0x10042a00
10042714:	5f                   	pop    edi
10042715:	c3                   	ret
