
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f9db0 <.text+0xf8db0>:
100f9db0:	55                   	push   ebp
100f9db1:	8b ec                	mov    ebp,esp
100f9db3:	83 ec 1c             	sub    esp,0x1c
100f9db6:	56                   	push   esi
100f9db7:	8b f1                	mov    esi,ecx
100f9db9:	8d 4e 04             	lea    ecx,[esi+0x4]
100f9dbc:	e8 ef 31 f5 ff       	call   0x1004cfb0
100f9dc1:	85 c0                	test   eax,eax
100f9dc3:	75 27                	jne    0x100f9dec
100f9dc5:	8b 06                	mov    eax,DWORD PTR [esi]
100f9dc7:	33 c9                	xor    ecx,ecx
100f9dc9:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
100f9dcc:	b8 04 00 00 00       	mov    eax,0x4
100f9dd1:	03 d6                	add    edx,esi
100f9dd3:	39 4a 38             	cmp    DWORD PTR [edx+0x38],ecx
100f9dd6:	0f 45 c1             	cmovne eax,ecx
100f9dd9:	8b 4a 10             	mov    ecx,DWORD PTR [edx+0x10]
100f9ddc:	0b 42 0c             	or     eax,DWORD PTR [edx+0xc]
100f9ddf:	83 e0 15             	and    eax,0x15
100f9de2:	83 c8 02             	or     eax,0x2
100f9de5:	89 42 0c             	mov    DWORD PTR [edx+0xc],eax
100f9de8:	23 c8                	and    ecx,eax
100f9dea:	75 05                	jne    0x100f9df1
100f9dec:	5e                   	pop    esi
100f9ded:	8b e5                	mov    esp,ebp
100f9def:	5d                   	pop    ebp
100f9df0:	c3                   	ret
100f9df1:	f6 c1 04             	test   cl,0x4
100f9df4:	74 07                	je     0x100f9dfd
100f9df6:	be 5c da 1a 10       	mov    esi,0x101ada5c
100f9dfb:	eb 10                	jmp    0x100f9e0d
100f9dfd:	f6 c1 02             	test   cl,0x2
100f9e00:	be 74 da 1a 10       	mov    esi,0x101ada74
100f9e05:	b8 8c da 1a 10       	mov    eax,0x101ada8c
100f9e0a:	0f 44 f0             	cmove  esi,eax
100f9e0d:	8d 45 f8             	lea    eax,[ebp-0x8]
100f9e10:	6a 01                	push   0x1
100f9e12:	50                   	push   eax
100f9e13:	e8 38 df f3 ff       	call   0x10037d50
100f9e18:	83 c4 08             	add    esp,0x8
100f9e1b:	8d 4d e4             	lea    ecx,[ebp-0x1c]
100f9e1e:	50                   	push   eax
100f9e1f:	56                   	push   esi
100f9e20:	e8 db 62 f3 ff       	call   0x10030100
100f9e25:	68 cc 48 20 10       	push   0x102048cc
100f9e2a:	8d 45 e4             	lea    eax,[ebp-0x1c]
100f9e2d:	50                   	push   eax
100f9e2e:	e8 89 62 04 00       	call   0x101400bc
