
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b4d0 <.text+0x11a4d0>:
1011b4d0:	55                   	push   ebp
1011b4d1:	8b ec                	mov    ebp,esp
1011b4d3:	56                   	push   esi
1011b4d4:	57                   	push   edi
1011b4d5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1011b4d8:	be 08 1e 23 10       	mov    esi,0x10231e08
1011b4dd:	0f 1f 00             	nop    DWORD PTR [eax]
1011b4e0:	8b 06                	mov    eax,DWORD PTR [esi]
1011b4e2:	85 c0                	test   eax,eax
1011b4e4:	74 0e                	je     0x1011b4f4
1011b4e6:	57                   	push   edi
1011b4e7:	50                   	push   eax
1011b4e8:	e8 ce 07 06 00       	call   0x1017bcbb
1011b4ed:	83 c4 08             	add    esp,0x8
1011b4f0:	85 c0                	test   eax,eax
1011b4f2:	74 2c                	je     0x1011b520
1011b4f4:	83 c6 08             	add    esi,0x8
1011b4f7:	81 fe 08 1f 23 10    	cmp    esi,0x10231f08
1011b4fd:	7c e1                	jl     0x1011b4e0
1011b4ff:	a1 58 1f 23 10       	mov    eax,ds:0x10231f58
1011b504:	33 c9                	xor    ecx,ecx
1011b506:	40                   	inc    eax
1011b507:	83 f8 20             	cmp    eax,0x20
1011b50a:	0f 4d c1             	cmovge eax,ecx
1011b50d:	a3 58 1f 23 10       	mov    ds:0x10231f58,eax
1011b512:	89 3c c5 08 1e 23 10 	mov    DWORD PTR [eax*8+0x10231e08],edi
1011b519:	89 04 c5 0c 1e 23 10 	mov    DWORD PTR [eax*8+0x10231e0c],eax
1011b520:	5f                   	pop    edi
1011b521:	5e                   	pop    esi
1011b522:	5d                   	pop    ebp
1011b523:	c3                   	ret
