
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fb050 <.text+0xfa050>:
100fb050:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb055:	56                   	push   esi
100fb056:	8b f1                	mov    esi,ecx
100fb058:	6a 00                	push   0x0
100fb05a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fb060:	03 86 74 03 00 00    	add    eax,DWORD PTR [esi+0x374]
100fb066:	50                   	push   eax
100fb067:	e8 54 fb ff ff       	call   0x100fabc0
100fb06c:	50                   	push   eax
100fb06d:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
100fb073:	e8 c8 c6 f1 ff       	call   0x10017740
100fb078:	8b ce                	mov    ecx,esi
100fb07a:	85 c0                	test   eax,eax
100fb07c:	74 5a                	je     0x100fb0d8
100fb07e:	8b 06                	mov    eax,DWORD PTR [esi]
100fb080:	ff 90 44 02 00 00    	call   DWORD PTR [eax+0x244]
100fb086:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb08b:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100fb08f:	0f 5a c0             	cvtps2pd xmm0,xmm0
100fb092:	f2 0f 58 05 c8 61 1a 	addsd  xmm0,QWORD PTR ds:0x101a61c8
100fb099:	10 
100fb09a:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100fb09e:	f3 0f 11 86 ac 03 00 	movss  DWORD PTR [esi+0x3ac],xmm0
100fb0a5:	00 
100fb0a6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb0ab:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100fb0b1:	8b 86 74 03 00 00    	mov    eax,DWORD PTR [esi+0x374]
100fb0b7:	03 c1                	add    eax,ecx
100fb0b9:	50                   	push   eax
100fb0ba:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fb0bd:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
100fb0c3:	03 c1                	add    eax,ecx
100fb0c5:	50                   	push   eax
100fb0c6:	68 e0 de 1d 10       	push   0x101ddee0
100fb0cb:	6a 02                	push   0x2
100fb0cd:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fb0d3:	83 c4 10             	add    esp,0x10
100fb0d6:	5e                   	pop    esi
100fb0d7:	c3                   	ret
100fb0d8:	e8 d3 f3 ff ff       	call   0x100fa4b0
100fb0dd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb0e2:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100fb0e8:	8b 86 74 03 00 00    	mov    eax,DWORD PTR [esi+0x374]
100fb0ee:	03 c1                	add    eax,ecx
100fb0f0:	50                   	push   eax
100fb0f1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fb0f4:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
100fb0fa:	03 c1                	add    eax,ecx
100fb0fc:	50                   	push   eax
100fb0fd:	68 00 df 1d 10       	push   0x101ddf00
100fb102:	6a 02                	push   0x2
100fb104:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fb10a:	8b 06                	mov    eax,DWORD PTR [esi]
100fb10c:	83 c4 0c             	add    esp,0xc
100fb10f:	8b ce                	mov    ecx,esi
100fb111:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100fb118:	ff 50 08             	call   DWORD PTR [eax+0x8]
100fb11b:	5e                   	pop    esi
100fb11c:	c3                   	ret
