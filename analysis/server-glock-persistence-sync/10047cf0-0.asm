
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047cf0 <.text+0x46cf0>:
10047cf0:	55                   	push   ebp
10047cf1:	8b ec                	mov    ebp,esp
10047cf3:	83 ec 0c             	sub    esp,0xc
10047cf6:	8d 45 f4             	lea    eax,[ebp-0xc]
10047cf9:	56                   	push   esi
10047cfa:	8b f1                	mov    esi,ecx
10047cfc:	51                   	push   ecx
10047cfd:	c7 04 24 b6 7e b2 3d 	mov    DWORD PTR [esp],0x3db27eb6
10047d04:	50                   	push   eax
10047d05:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10047d0b:	e8 90 81 09 00       	call   0x100dfea0
10047d10:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047d15:	f3 0f 10 86 d8 01 00 	movss  xmm0,DWORD PTR [esi+0x1d8]
10047d1c:	00 
10047d1d:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
10047d20:	77 7e                	ja     0x10047da0
10047d22:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10047d29:	75 75                	jne    0x10047da0
10047d2b:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
10047d32:	75 6c                	jne    0x10047da0
10047d34:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
10047d3b:	8b 8e e4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1e4]
10047d41:	8b 06                	mov    eax,DWORD PTR [esi]
10047d43:	6a 00                	push   0x0
10047d45:	6a 01                	push   0x1
10047d47:	74 0e                	je     0x10047d57
10047d49:	85 c9                	test   ecx,ecx
10047d4b:	8b ce                	mov    ecx,esi
10047d4d:	74 04                	je     0x10047d53
10047d4f:	6a 20                	push   0x20
10047d51:	eb 10                	jmp    0x10047d63
10047d53:	6a 21                	push   0x21
10047d55:	eb 0c                	jmp    0x10047d63
10047d57:	85 c9                	test   ecx,ecx
10047d59:	8b ce                	mov    ecx,esi
10047d5b:	74 04                	je     0x10047d61
10047d5d:	6a 00                	push   0x0
10047d5f:	eb 02                	jmp    0x10047d63
10047d61:	6a 01                	push   0x1
10047d63:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
10047d69:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10047d6f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10047d72:	ff b0 1c 02 00 00    	push   DWORD PTR [eax+0x21c]
10047d78:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10047d7b:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10047d81:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
10047d87:	83 c4 04             	add    esp,0x4
10047d8a:	50                   	push   eax
10047d8b:	e8 00 76 fc ff       	call   0x1000f390
10047d90:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047d95:	83 c4 08             	add    esp,0x8
10047d98:	d8 00                	fadd   DWORD PTR [eax]
10047d9a:	d9 9e d8 01 00 00    	fstp   DWORD PTR [esi+0x1d8]
10047da0:	5e                   	pop    esi
10047da1:	8b e5                	mov    esp,ebp
10047da3:	5d                   	pop    ebp
10047da4:	c3                   	ret
