
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011f5d0 <.text+0x11e5d0>:
1011f5d0:	55                   	push   ebp
1011f5d1:	8b ec                	mov    ebp,esp
1011f5d3:	56                   	push   esi
1011f5d4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011f5d7:	57                   	push   edi
1011f5d8:	8b f9                	mov    edi,ecx
1011f5da:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011f5e0:	89 b0 18 04 00 00    	mov    DWORD PTR [eax+0x418],esi
1011f5e6:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011f5ec:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011f5ef:	89 b0 1c 02 00 00    	mov    DWORD PTR [eax+0x21c],esi
1011f5f5:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011f5fb:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011f5fe:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011f604:	6a 00                	push   0x0
1011f606:	6a 23                	push   0x23
1011f608:	6a 01                	push   0x1
1011f60a:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011f610:	56                   	push   esi
1011f611:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011f617:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011f61a:	ff b0 14 01 00 00    	push   DWORD PTR [eax+0x114]
1011f620:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011f626:	83 c4 18             	add    esp,0x18
1011f629:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011f62f:	5f                   	pop    edi
1011f630:	5e                   	pop    esi
1011f631:	5d                   	pop    ebp
1011f632:	c2 0c 00             	ret    0xc
