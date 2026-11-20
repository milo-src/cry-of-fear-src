
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bcd00 <.text+0xbbd00>:
100bcd00:	55                   	push   ebp
100bcd01:	8b ec                	mov    ebp,esp
100bcd03:	56                   	push   esi
100bcd04:	8b f1                	mov    esi,ecx
100bcd06:	8b 96 4c 03 00 00    	mov    edx,DWORD PTR [esi+0x34c]
100bcd0c:	85 d2                	test   edx,edx
100bcd0e:	74 3d                	je     0x100bcd4d
100bcd10:	f6 45 08 04          	test   BYTE PTR [ebp+0x8],0x4
100bcd14:	0f 85 85 00 00 00    	jne    0x100bcd9f
100bcd1a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bcd1f:	8b 52 04             	mov    edx,DWORD PTR [edx+0x4]
100bcd22:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100bcd28:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
100bcd2e:	03 c1                	add    eax,ecx
100bcd30:	50                   	push   eax
100bcd31:	8b 02                	mov    eax,DWORD PTR [edx]
100bcd33:	03 c1                	add    eax,ecx
100bcd35:	50                   	push   eax
100bcd36:	68 78 52 1d 10       	push   0x101d5278
100bcd3b:	6a 01                	push   0x1
100bcd3d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100bcd43:	83 c4 10             	add    esp,0x10
100bcd46:	33 c0                	xor    eax,eax
100bcd48:	5e                   	pop    esi
100bcd49:	5d                   	pop    ebp
100bcd4a:	c2 04 00             	ret    0x4
100bcd4d:	8b 06                	mov    eax,DWORD PTR [esi]
100bcd4f:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
100bcd55:	85 c0                	test   eax,eax
100bcd57:	74 50                	je     0x100bcda9
100bcd59:	8b 86 24 02 00 00    	mov    eax,DWORD PTR [esi+0x224]
100bcd5f:	83 f8 05             	cmp    eax,0x5
100bcd62:	74 45                	je     0x100bcda9
100bcd64:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100bcd67:	f6 c1 02             	test   cl,0x2
100bcd6a:	75 33                	jne    0x100bcd9f
100bcd6c:	85 c0                	test   eax,eax
100bcd6e:	74 2f                	je     0x100bcd9f
100bcd70:	83 f8 01             	cmp    eax,0x1
100bcd73:	74 2a                	je     0x100bcd9f
100bcd75:	83 be 28 02 00 00 01 	cmp    DWORD PTR [esi+0x228],0x1
100bcd7c:	74 21                	je     0x100bcd9f
100bcd7e:	83 f8 03             	cmp    eax,0x3
100bcd81:	75 05                	jne    0x100bcd88
100bcd83:	f6 c1 01             	test   cl,0x1
100bcd86:	75 17                	jne    0x100bcd9f
100bcd88:	68 b8 52 1d 10       	push   0x101d52b8
100bcd8d:	6a 01                	push   0x1
100bcd8f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100bcd95:	83 c4 08             	add    esp,0x8
100bcd98:	33 c0                	xor    eax,eax
100bcd9a:	5e                   	pop    esi
100bcd9b:	5d                   	pop    ebp
100bcd9c:	c2 04 00             	ret    0x4
100bcd9f:	b8 01 00 00 00       	mov    eax,0x1
100bcda4:	5e                   	pop    esi
100bcda5:	5d                   	pop    ebp
100bcda6:	c2 04 00             	ret    0x4
100bcda9:	68 9c 52 1d 10       	push   0x101d529c
100bcdae:	6a 01                	push   0x1
100bcdb0:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100bcdb6:	83 c4 08             	add    esp,0x8
100bcdb9:	33 c0                	xor    eax,eax
100bcdbb:	5e                   	pop    esi
100bcdbc:	5d                   	pop    ebp
100bcdbd:	c2 04 00             	ret    0x4
