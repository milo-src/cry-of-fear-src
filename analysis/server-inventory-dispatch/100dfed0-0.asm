
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dfed0 <.text+0xdeed0>:
100dfed0:	55                   	push   ebp
100dfed1:	8b ec                	mov    ebp,esp
100dfed3:	56                   	push   esi
100dfed4:	57                   	push   edi
100dfed5:	8b f9                	mov    edi,ecx
100dfed7:	80 bf 9c 1e 00 00 00 	cmp    BYTE PTR [edi+0x1e9c],0x0
100dfede:	74 51                	je     0x100dff31
100dfee0:	be 03 00 00 00       	mov    esi,0x3
100dfee5:	39 75 08             	cmp    DWORD PTR [ebp+0x8],esi
100dfee8:	0f 4e 75 08          	cmovle esi,DWORD PTR [ebp+0x8]
100dfeec:	85 f6                	test   esi,esi
100dfeee:	b8 01 00 00 00       	mov    eax,0x1
100dfef3:	0f 4e f0             	cmovle esi,eax
100dfef6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100dfefb:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100dff01:	03 84 b7 34 22 00 00 	add    eax,DWORD PTR [edi+esi*4+0x2234]
100dff08:	50                   	push   eax
100dff09:	68 c0 c6 1d 10       	push   0x101dc6c0
100dff0e:	6a 01                	push   0x1
100dff10:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100dff16:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100dff1b:	83 c4 0c             	add    esp,0xc
100dff1e:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100dff24:	03 84 b7 34 22 00 00 	add    eax,DWORD PTR [edi+esi*4+0x2234]
100dff2b:	5f                   	pop    edi
100dff2c:	5e                   	pop    esi
100dff2d:	5d                   	pop    ebp
100dff2e:	c2 04 00             	ret    0x4
100dff31:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100dff34:	83 fe 06             	cmp    esi,0x6
100dff37:	7e b3                	jle    0x100dfeec
100dff39:	be 06 00 00 00       	mov    esi,0x6
100dff3e:	eb b6                	jmp    0x100dfef6
