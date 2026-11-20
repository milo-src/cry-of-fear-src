
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cd990 <.text+0xcc990>:
100cd990:	55                   	push   ebp
100cd991:	8b ec                	mov    ebp,esp
100cd993:	83 39 00             	cmp    DWORD PTR [ecx],0x0
100cd996:	0f 84 3d 01 00 00    	je     0x100cdad9
100cd99c:	83 79 04 00          	cmp    DWORD PTR [ecx+0x4],0x0
100cd9a0:	0f 84 33 01 00 00    	je     0x100cdad9
100cd9a6:	56                   	push   esi
100cd9a7:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
100cd9aa:	85 f6                	test   esi,esi
100cd9ac:	0f 84 0d 01 00 00    	je     0x100cdabf
100cd9b2:	ff b6 0c 02 00 00    	push   DWORD PTR [esi+0x20c]
100cd9b8:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
100cd9be:	83 c4 04             	add    esp,0x4
100cd9c1:	85 c0                	test   eax,eax
100cd9c3:	0f 84 f6 00 00 00    	je     0x100cdabf
100cd9c9:	68 8c f5 1b 10       	push   0x101bf58c
100cd9ce:	56                   	push   esi
100cd9cf:	e8 1c d1 f3 ff       	call   0x1000aaf0
100cd9d4:	83 c4 08             	add    esp,0x8
100cd9d7:	85 c0                	test   eax,eax
100cd9d9:	75 53                	jne    0x100cda2e
100cd9db:	68 78 f5 1b 10       	push   0x101bf578
100cd9e0:	56                   	push   esi
100cd9e1:	e8 0a d1 f3 ff       	call   0x1000aaf0
100cd9e6:	83 c4 08             	add    esp,0x8
100cd9e9:	85 c0                	test   eax,eax
100cd9eb:	75 41                	jne    0x100cda2e
100cd9ed:	68 14 ef 1b 10       	push   0x101bef14
100cd9f2:	56                   	push   esi
100cd9f3:	e8 f8 d0 f3 ff       	call   0x1000aaf0
100cd9f8:	83 c4 08             	add    esp,0x8
100cd9fb:	85 c0                	test   eax,eax
100cd9fd:	74 0a                	je     0x100cda09
100cd9ff:	83 7d 14 01          	cmp    DWORD PTR [ebp+0x14],0x1
100cda03:	0f 84 c6 00 00 00    	je     0x100cdacf
100cda09:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100cda0e:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100cda14:	03 06                	add    eax,DWORD PTR [esi]
100cda16:	50                   	push   eax
100cda17:	68 b4 67 1d 10       	push   0x101d67b4
100cda1c:	6a 02                	push   0x2
100cda1e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cda24:	83 c4 0c             	add    esp,0xc
100cda27:	33 c0                	xor    eax,eax
100cda29:	5e                   	pop    esi
100cda2a:	5d                   	pop    ebp
100cda2b:	c2 10 00             	ret    0x10
100cda2e:	8b 86 0c 02 00 00    	mov    eax,DWORD PTR [esi+0x20c]
100cda34:	85 c0                	test   eax,eax
100cda36:	75 12                	jne    0x100cda4a
100cda38:	50                   	push   eax
100cda39:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100cda3f:	83 c4 04             	add    esp,0x4
100cda42:	85 c0                	test   eax,eax
100cda44:	75 04                	jne    0x100cda4a
100cda46:	33 c9                	xor    ecx,ecx
100cda48:	eb 03                	jmp    0x100cda4d
100cda4a:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
100cda4d:	f7 86 a4 01 00 00 00 	test   DWORD PTR [esi+0x1a4],0x100
100cda54:	01 00 00 
100cda57:	74 28                	je     0x100cda81
100cda59:	f7 45 10 00 02 00 00 	test   DWORD PTR [ebp+0x10],0x200
100cda60:	75 6d                	jne    0x100cdacf
100cda62:	8b 01                	mov    eax,DWORD PTR [ecx]
100cda64:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
100cda6a:	85 c0                	test   eax,eax
100cda6c:	75 b9                	jne    0x100cda27
100cda6e:	f6 86 a4 01 00 00 20 	test   BYTE PTR [esi+0x1a4],0x20
100cda75:	74 b0                	je     0x100cda27
100cda77:	b8 01 00 00 00       	mov    eax,0x1
100cda7c:	5e                   	pop    esi
100cda7d:	5d                   	pop    ebp
100cda7e:	c2 10 00             	ret    0x10
100cda81:	8b 01                	mov    eax,DWORD PTR [ecx]
100cda83:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
100cda89:	85 c0                	test   eax,eax
100cda8b:	75 09                	jne    0x100cda96
100cda8d:	f6 86 a4 01 00 00 20 	test   BYTE PTR [esi+0x1a4],0x20
100cda94:	75 39                	jne    0x100cdacf
100cda96:	f7 45 10 00 02 00 00 	test   DWORD PTR [ebp+0x10],0x200
100cda9d:	74 88                	je     0x100cda27
100cda9f:	f7 86 a4 01 00 00 00 	test   DWORD PTR [esi+0x1a4],0x200
100cdaa6:	02 00 00 
100cdaa9:	74 24                	je     0x100cdacf
100cdaab:	83 7d 14 01          	cmp    DWORD PTR [ebp+0x14],0x1
100cdaaf:	0f 85 72 ff ff ff    	jne    0x100cda27
100cdab5:	b8 01 00 00 00       	mov    eax,0x1
100cdaba:	5e                   	pop    esi
100cdabb:	5d                   	pop    ebp
100cdabc:	c2 10 00             	ret    0x10
100cdabf:	68 a4 67 1d 10       	push   0x101d67a4
100cdac4:	6a 02                	push   0x2
100cdac6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cdacc:	83 c4 08             	add    esp,0x8
100cdacf:	b8 01 00 00 00       	mov    eax,0x1
100cdad4:	5e                   	pop    esi
100cdad5:	5d                   	pop    ebp
100cdad6:	c2 10 00             	ret    0x10
100cdad9:	68 90 67 1d 10       	push   0x101d6790
100cdade:	6a 02                	push   0x2
100cdae0:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cdae6:	83 c4 08             	add    esp,0x8
100cdae9:	33 c0                	xor    eax,eax
100cdaeb:	5d                   	pop    ebp
100cdaec:	c2 10 00             	ret    0x10
