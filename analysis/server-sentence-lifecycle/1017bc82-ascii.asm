
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1017bc82 <.text+0x17ac82>:
1017bc82:	8b ff                	mov    edi,edi
1017bc84:	55                   	push   ebp
1017bc85:	8b ec                	mov    ebp,esp
1017bc87:	56                   	push   esi
1017bc88:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1017bc8b:	57                   	push   edi
1017bc8c:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1017bc8f:	0f b6 0e             	movzx  ecx,BYTE PTR [esi]
1017bc92:	8d 41 bf             	lea    eax,[ecx-0x41]
1017bc95:	83 f8 19             	cmp    eax,0x19
1017bc98:	77 03                	ja     0x1017bc9d
1017bc9a:	83 c1 20             	add    ecx,0x20
1017bc9d:	0f b6 17             	movzx  edx,BYTE PTR [edi]
1017bca0:	46                   	inc    esi
1017bca1:	8d 42 bf             	lea    eax,[edx-0x41]
1017bca4:	83 f8 19             	cmp    eax,0x19
1017bca7:	77 03                	ja     0x1017bcac
1017bca9:	83 c2 20             	add    edx,0x20
1017bcac:	8b c1                	mov    eax,ecx
1017bcae:	47                   	inc    edi
1017bcaf:	2b c2                	sub    eax,edx
1017bcb1:	75 04                	jne    0x1017bcb7
1017bcb3:	85 c9                	test   ecx,ecx
1017bcb5:	75 d8                	jne    0x1017bc8f
1017bcb7:	5f                   	pop    edi
1017bcb8:	5e                   	pop    esi
1017bcb9:	5d                   	pop    ebp
1017bcba:	c3                   	ret
