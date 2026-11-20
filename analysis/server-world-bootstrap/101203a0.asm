
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101203a0 <.text+0x11f3a0>:
101203a0:	55                   	push   ebp
101203a1:	8b ec                	mov    ebp,esp
101203a3:	56                   	push   esi
101203a4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
101203a7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
101203aa:	85 f6                	test   esi,esi
101203ac:	75 13                	jne    0x101203c1
101203ae:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
101203b4:	85 c0                	test   eax,eax
101203b6:	74 06                	je     0x101203be
101203b8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
101203be:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
101203c1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
101203c7:	85 c9                	test   ecx,ecx
101203c9:	74 07                	je     0x101203d2
101203cb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
101203ce:	85 c0                	test   eax,eax
101203d0:	75 27                	jne    0x101203f9
101203d2:	68 dc 00 00 00       	push   0xdc
101203d7:	51                   	push   ecx
101203d8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
101203de:	83 c4 08             	add    esp,0x8
101203e1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
101203e4:	85 c0                	test   eax,eax
101203e6:	74 0c                	je     0x101203f4
101203e8:	c7 00 a0 6c 1e 10    	mov    DWORD PTR [eax],0x101e6ca0
101203ee:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
101203f1:	5e                   	pop    esi
101203f2:	5d                   	pop    ebp
101203f3:	c3                   	ret
101203f4:	33 c0                	xor    eax,eax
101203f6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
101203f9:	5e                   	pop    esi
101203fa:	5d                   	pop    ebp
101203fb:	c3                   	ret
