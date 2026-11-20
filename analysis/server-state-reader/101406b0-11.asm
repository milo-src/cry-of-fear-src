
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10140bf0 <.text+0x13fbf0>:
10140bf0:	ba 10 00 00 00       	mov    edx,0x10
10140bf5:	2b d0                	sub    edx,eax
10140bf7:	2b ca                	sub    ecx,edx
10140bf9:	51                   	push   ecx
10140bfa:	8b c2                	mov    eax,edx
10140bfc:	8b c8                	mov    ecx,eax
10140bfe:	83 e1 03             	and    ecx,0x3
10140c01:	74 09                	je     0x10140c0c
10140c03:	8a 16                	mov    dl,BYTE PTR [esi]
10140c05:	88 17                	mov    BYTE PTR [edi],dl
10140c07:	46                   	inc    esi
10140c08:	47                   	inc    edi
10140c09:	49                   	dec    ecx
10140c0a:	75 f7                	jne    0x10140c03
10140c0c:	c1 e8 02             	shr    eax,0x2
10140c0f:	74 0d                	je     0x10140c1e
10140c11:	8b 16                	mov    edx,DWORD PTR [esi]
10140c13:	89 17                	mov    DWORD PTR [edi],edx
10140c15:	8d 76 04             	lea    esi,[esi+0x4]
10140c18:	8d 7f 04             	lea    edi,[edi+0x4]
10140c1b:	48                   	dec    eax
10140c1c:	75 f3                	jne    0x10140c11
10140c1e:	59                   	pop    ecx
10140c1f:	e9 e9 fe ff ff       	jmp    0x10140b0d
