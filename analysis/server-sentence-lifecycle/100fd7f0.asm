
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fd7f0 <.text+0xfc7f0>:
100fd7f0:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100fd7f3:	8b 88 d8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d8]
100fd7f9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fd7fe:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100fd804:	03 d1                	add    edx,ecx
100fd806:	85 c9                	test   ecx,ecx
100fd808:	74 21                	je     0x100fd82b
100fd80a:	8b ca                	mov    ecx,edx
100fd80c:	56                   	push   esi
100fd80d:	8d 71 01             	lea    esi,[ecx+0x1]
100fd810:	8a 01                	mov    al,BYTE PTR [ecx]
100fd812:	41                   	inc    ecx
100fd813:	84 c0                	test   al,al
100fd815:	75 f9                	jne    0x100fd810
100fd817:	2b ce                	sub    ecx,esi
100fd819:	5e                   	pop    esi
100fd81a:	83 f9 01             	cmp    ecx,0x1
100fd81d:	76 0c                	jbe    0x100fd82b
100fd81f:	80 3a 21             	cmp    BYTE PTR [edx],0x21
100fd822:	74 07                	je     0x100fd82b
100fd824:	52                   	push   edx
100fd825:	e8 06 92 01 00       	call   0x10116a30
100fd82a:	59                   	pop    ecx
100fd82b:	c3                   	ret
