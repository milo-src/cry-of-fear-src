
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011e0f0 <.text+0x11d0f0>:
1011e0f0:	55                   	push   ebp
1011e0f1:	8b ec                	mov    ebp,esp
1011e0f3:	51                   	push   ecx
1011e0f4:	53                   	push   ebx
1011e0f5:	8b c1                	mov    eax,ecx
1011e0f7:	bb 06 00 00 00       	mov    ebx,0x6
1011e0fc:	56                   	push   esi
1011e0fd:	57                   	push   edi
1011e0fe:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1011e101:	8d b8 e0 00 00 00    	lea    edi,[eax+0xe0]
1011e107:	8b 37                	mov    esi,DWORD PTR [edi]
1011e109:	85 f6                	test   esi,esi
1011e10b:	74 23                	je     0x1011e130
1011e10d:	0f 1f 00             	nop    DWORD PTR [eax]
1011e110:	8b 06                	mov    eax,DWORD PTR [esi]
1011e112:	51                   	push   ecx
1011e113:	8b ce                	mov    ecx,esi
1011e115:	c7 46 78 e0 28 10 10 	mov    DWORD PTR [esi+0x78],0x101028e0
1011e11c:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1011e123:	ff 50 08             	call   DWORD PTR [eax+0x8]
1011e126:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
1011e12c:	85 f6                	test   esi,esi
1011e12e:	75 e0                	jne    0x1011e110
1011e130:	83 c7 04             	add    edi,0x4
1011e133:	83 eb 01             	sub    ebx,0x1
1011e136:	75 cf                	jne    0x1011e107
1011e138:	ff 75 fc             	push   DWORD PTR [ebp-0x4]
1011e13b:	e8 c0 b7 ff ff       	call   0x10119900
1011e140:	83 c4 04             	add    esp,0x4
1011e143:	5f                   	pop    edi
1011e144:	5e                   	pop    esi
1011e145:	5b                   	pop    ebx
1011e146:	8b e5                	mov    esp,ebp
1011e148:	5d                   	pop    ebp
1011e149:	c3                   	ret
