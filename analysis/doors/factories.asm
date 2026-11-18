
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047eb0 <.text+0x46eb0>:
10047eb0:	55                   	push   ebp
10047eb1:	8b ec                	mov    ebp,esp
10047eb3:	56                   	push   esi
10047eb4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10047eb7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047eba:	85 f6                	test   esi,esi
10047ebc:	75 13                	jne    0x10047ed1
10047ebe:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10047ec4:	85 c0                	test   eax,eax
10047ec6:	74 06                	je     0x10047ece
10047ec8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10047ece:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047ed1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10047ed7:	85 c9                	test   ecx,ecx
10047ed9:	74 07                	je     0x10047ee2
10047edb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10047ede:	85 c0                	test   eax,eax
10047ee0:	75 27                	jne    0x10047f09
10047ee2:	68 dc 00 00 00       	push   0xdc
10047ee7:	51                   	push   ecx
10047ee8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10047eee:	83 c4 08             	add    esp,0x8
10047ef1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10047ef4:	85 c0                	test   eax,eax
10047ef6:	74 0c                	je     0x10047f04
10047ef8:	c7 00 24 0f 1b 10    	mov    DWORD PTR [eax],0x101b0f24
10047efe:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047f01:	5e                   	pop    esi
10047f02:	5d                   	pop    ebp
10047f03:	c3                   	ret
10047f04:	33 c0                	xor    eax,eax
10047f06:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047f09:	5e                   	pop    esi
10047f0a:	5d                   	pop    ebp
10047f0b:	c3                   	ret
10047f0c:	cc                   	int3
10047f0d:	cc                   	int3
10047f0e:	cc                   	int3
10047f0f:	cc                   	int3
10047f10:	55                   	push   ebp
10047f11:	8b ec                	mov    ebp,esp
10047f13:	56                   	push   esi
10047f14:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10047f17:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047f1a:	85 f6                	test   esi,esi
10047f1c:	75 13                	jne    0x10047f31
10047f1e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10047f24:	85 c0                	test   eax,eax
10047f26:	74 06                	je     0x10047f2e
10047f28:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10047f2e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047f31:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10047f37:	85 c9                	test   ecx,ecx
10047f39:	74 07                	je     0x10047f42
10047f3b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10047f3e:	85 c0                	test   eax,eax
10047f40:	75 27                	jne    0x10047f69
10047f42:	68 b0 01 00 00       	push   0x1b0
10047f47:	51                   	push   ecx
10047f48:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10047f4e:	83 c4 08             	add    esp,0x8
10047f51:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10047f54:	85 c0                	test   eax,eax
10047f56:	74 0c                	je     0x10047f64
10047f58:	c7 00 b8 0a 1b 10    	mov    DWORD PTR [eax],0x101b0ab8
10047f5e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047f61:	5e                   	pop    esi
10047f62:	5d                   	pop    ebp
10047f63:	c3                   	ret
10047f64:	33 c0                	xor    eax,eax
10047f66:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047f69:	5e                   	pop    esi
10047f6a:	5d                   	pop    ebp
10047f6b:	c3                   	ret
10047f6c:	cc                   	int3
10047f6d:	cc                   	int3
10047f6e:	cc                   	int3
10047f6f:	cc                   	int3
10047f70:	55                   	push   ebp
10047f71:	8b ec                	mov    ebp,esp
10047f73:	56                   	push   esi
10047f74:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10047f77:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047f7a:	85 f6                	test   esi,esi
10047f7c:	75 13                	jne    0x10047f91
10047f7e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10047f84:	85 c0                	test   eax,eax
10047f86:	74 06                	je     0x10047f8e
10047f88:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10047f8e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047f91:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10047f97:	85 c9                	test   ecx,ecx
10047f99:	74 07                	je     0x10047fa2
10047f9b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10047f9e:	85 c0                	test   eax,eax
10047fa0:	75 27                	jne    0x10047fc9
10047fa2:	68 dc 00 00 00       	push   0xdc
10047fa7:	51                   	push   ecx
10047fa8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
10047fae:	83 c4 08             	add    esp,0x8
10047fb1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10047fb4:	85 c0                	test   eax,eax
10047fb6:	74 0c                	je     0x10047fc4
10047fb8:	c7 00 04 0e 1b 10    	mov    DWORD PTR [eax],0x101b0e04
10047fbe:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047fc1:	5e                   	pop    esi
10047fc2:	5d                   	pop    ebp
10047fc3:	c3                   	ret
10047fc4:	33 c0                	xor    eax,eax
10047fc6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10047fc9:	5e                   	pop    esi
10047fca:	5d                   	pop    ebp
10047fcb:	c3                   	ret
10047fcc:	cc                   	int3
10047fcd:	cc                   	int3
10047fce:	cc                   	int3
10047fcf:	cc                   	int3
10047fd0:	55                   	push   ebp
10047fd1:	8b ec                	mov    ebp,esp
10047fd3:	56                   	push   esi
10047fd4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10047fd7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047fda:	85 f6                	test   esi,esi
10047fdc:	75 13                	jne    0x10047ff1
10047fde:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10047fe4:	85 c0                	test   eax,eax
10047fe6:	74 06                	je     0x10047fee
10047fe8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
10047fee:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10047ff1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10047ff7:	85 c9                	test   ecx,ecx
10047ff9:	74 07                	je     0x10048002
10047ffb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
10047ffe:	85 c0                	test   eax,eax
10048000:	75 27                	jne    0x10048029
10048002:	68 dc 00 00 00       	push   0xdc
10048007:	51                   	push   ecx
10048008:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1004800e:	83 c4 08             	add    esp,0x8
10048011:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10048014:	85 c0                	test   eax,eax
10048016:	74 0c                	je     0x10048024
10048018:	c7 00 9c 24 1a 10    	mov    DWORD PTR [eax],0x101a249c
1004801e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10048021:	5e                   	pop    esi
10048022:	5d                   	pop    ebp
10048023:	c3                   	ret
10048024:	33 c0                	xor    eax,eax
10048026:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10048029:	5e                   	pop    esi
1004802a:	5d                   	pop    ebp
1004802b:	c3                   	ret
1004802c:	cc                   	int3
1004802d:	cc                   	int3
1004802e:	cc                   	int3
1004802f:	cc                   	int3
