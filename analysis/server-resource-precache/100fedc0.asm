
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fedc0 <.text+0xfddc0>:
100fedc0:	55                   	push   ebp
100fedc1:	8b ec                	mov    ebp,esp
100fedc3:	53                   	push   ebx
100fedc4:	56                   	push   esi
100fedc5:	33 f6                	xor    esi,esi
100fedc7:	57                   	push   edi
100fedc8:	39 35 6c f1 22 10    	cmp    DWORD PTR ds:0x1022f16c,esi
100fedce:	7e 24                	jle    0x100fedf4
100fedd0:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100fedd3:	bf 70 f1 22 10       	mov    edi,0x1022f170
100fedd8:	6a 0c                	push   0xc
100fedda:	57                   	push   edi
100feddb:	53                   	push   ebx
100feddc:	e8 b1 cf 07 00       	call   0x1017bd92
100fede1:	83 c4 0c             	add    esp,0xc
100fede4:	85 c0                	test   eax,eax
100fede6:	74 13                	je     0x100fedfb
100fede8:	46                   	inc    esi
100fede9:	83 c7 0d             	add    edi,0xd
100fedec:	3b 35 6c f1 22 10    	cmp    esi,DWORD PTR ds:0x1022f16c
100fedf2:	7c e4                	jl     0x100fedd8
100fedf4:	5f                   	pop    edi
100fedf5:	5e                   	pop    esi
100fedf6:	b0 43                	mov    al,0x43
100fedf8:	5b                   	pop    ebx
100fedf9:	5d                   	pop    ebp
100fedfa:	c3                   	ret
100fedfb:	8a 86 70 0b 23 10    	mov    al,BYTE PTR [esi+0x10230b70]
100fee01:	5f                   	pop    edi
100fee02:	5e                   	pop    esi
100fee03:	5b                   	pop    ebx
100fee04:	5d                   	pop    ebp
100fee05:	c3                   	ret
