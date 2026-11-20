
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f9d20 <.text+0xf8d20>:
100f9d20:	55                   	push   ebp
100f9d21:	8b ec                	mov    ebp,esp
100f9d23:	83 ec 1c             	sub    esp,0x1c
100f9d26:	56                   	push   esi
100f9d27:	8b f1                	mov    esi,ecx
100f9d29:	8d 4e 10             	lea    ecx,[esi+0x10]
100f9d2c:	e8 7f 32 f5 ff       	call   0x1004cfb0
100f9d31:	85 c0                	test   eax,eax
100f9d33:	75 27                	jne    0x100f9d5c
100f9d35:	8b 06                	mov    eax,DWORD PTR [esi]
100f9d37:	33 c9                	xor    ecx,ecx
100f9d39:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
100f9d3c:	b8 04 00 00 00       	mov    eax,0x4
100f9d41:	03 d6                	add    edx,esi
100f9d43:	39 4a 38             	cmp    DWORD PTR [edx+0x38],ecx
100f9d46:	0f 45 c1             	cmovne eax,ecx
100f9d49:	8b 4a 10             	mov    ecx,DWORD PTR [edx+0x10]
100f9d4c:	0b 42 0c             	or     eax,DWORD PTR [edx+0xc]
100f9d4f:	83 e0 15             	and    eax,0x15
100f9d52:	83 c8 02             	or     eax,0x2
100f9d55:	89 42 0c             	mov    DWORD PTR [edx+0xc],eax
100f9d58:	23 c8                	and    ecx,eax
100f9d5a:	75 05                	jne    0x100f9d61
100f9d5c:	5e                   	pop    esi
100f9d5d:	8b e5                	mov    esp,ebp
100f9d5f:	5d                   	pop    ebp
100f9d60:	c3                   	ret
100f9d61:	f6 c1 04             	test   cl,0x4
100f9d64:	74 07                	je     0x100f9d6d
100f9d66:	be 5c da 1a 10       	mov    esi,0x101ada5c
100f9d6b:	eb 10                	jmp    0x100f9d7d
100f9d6d:	f6 c1 02             	test   cl,0x2
100f9d70:	be 74 da 1a 10       	mov    esi,0x101ada74
100f9d75:	b8 8c da 1a 10       	mov    eax,0x101ada8c
100f9d7a:	0f 44 f0             	cmove  esi,eax
100f9d7d:	8d 45 f8             	lea    eax,[ebp-0x8]
100f9d80:	6a 01                	push   0x1
100f9d82:	50                   	push   eax
100f9d83:	e8 c8 df f3 ff       	call   0x10037d50
100f9d88:	83 c4 08             	add    esp,0x8
100f9d8b:	8d 4d e4             	lea    ecx,[ebp-0x1c]
100f9d8e:	50                   	push   eax
100f9d8f:	56                   	push   esi
100f9d90:	e8 6b 63 f3 ff       	call   0x10030100
100f9d95:	68 cc 48 20 10       	push   0x102048cc
100f9d9a:	8d 45 e4             	lea    eax,[ebp-0x1c]
100f9d9d:	50                   	push   eax
100f9d9e:	e8 19 63 04 00       	call   0x101400bc
